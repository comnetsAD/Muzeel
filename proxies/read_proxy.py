# by Gabriel, to connect to DB
import pymysql.cursors
from os import path, listdir
from tempfile import gettempdir
from mitmproxy import http, ctx
import os
import binascii
import pickle
import time
from urllib.parse import urlparse

requests = {}
class ReadProxy:
    def parseUrl(self, url):
        # TODO: Double check code, things that don't have backslash
        # Attempt to insert, there is a unique condition so if it faily, it fails
        parsedUrl = urlparse(url)
        if parsedUrl.path == '': 
            parsedUrl = urlparse(url+"/") # Remove descrepancies between "/" and "" ending urls
        return parsedUrl.scheme + "://" + parsedUrl.netloc + parsedUrl.path
    
    def load(self, loader):
        loader.add_option(name = "dbHost", typespec = str, default = "127.0.0.1", help = "Provide the host for the cache db, use dbHost")
        loader.add_option(name = "dbPort", typespec = int, default= 9922, help = "Provide port for the cache db, use dbPort")
        loader.add_option(name= "dbName", typespec = str, default = "deadcode", help = "Provide the db name, use dbName")
        loader.add_option(name = "dbUser", typespec = str, default = "root", help = "Provide the user for the cache db, use dbUser")
        loader.add_option(name= "dbPassword", typespec = str, default = "", help = "Provide the password for the cache db, use dbPassword")
        loader.add_option(name= "cacheDirectory", typespec = str, default="data/", help = "Provide the directory to cache the pages")

    def running(self):
        self.connection = pymysql.connect(host=ctx.options.dbHost,
                             user=ctx.options.dbUser,
                             port=ctx.options.dbPort,
                             password=ctx.options.dbPassword,
                             db=ctx.options.dbName,
                             autocommit=True)

    def request(self, flow: http.HTTPFlow) -> None:
        # store the request time
        requestUrl = flow.request.pretty_url.split("?")[0]
        requests[requestUrl] = time.time()
        initiatingUrl = flow.request.headers["init_url"]
        del flow.request.headers["init_url"]
        del flow.request.headers["solution"]

        try:
            with self.connection.cursor() as cursor:
                requestUrl = flow.request.pretty_url.split("?")[0]
                flow.initiatingUrl = self.parseUrl(initiatingUrl)
                query_template_search = "SELECT headFilePath, updateFilePath, delay, contFilePath FROM cachedPages WHERE requestUrl = '{0}' AND initiatingUrl = '{1}'".format(requestUrl, flow.initiatingUrl)
                cursor.execute(query_template_search)
                sql_response = cursor.fetchone()
        finally:
            cursor.close()

        # return miss if not cache hit
        if not sql_response:
            print ("--------- CACHE MISS {} -----------".format(requestUrl))
            flow.response = http.HTTPResponse.make (200,"",{"Content-Type": "text/html"})
            # flow.initiatingUrl = False
            return
        else:
            print ("--------- CACHE HIT {} -----------".format(requestUrl))
            temp_content = None
            if sql_response[1] != None:
                with open(ctx.options.cacheDirectory + sql_response[1].split(".u")[0]+".m", 'rb') as temp_file:
                    temp_content = temp_file.read()
                    temp_file.close()
            else:
                with open(ctx.options.cacheDirectory + sql_response[3], 'rb') as temp_file:
                    temp_content = temp_file.read()
                    temp_file.close()

            with open(ctx.options.cacheDirectory + sql_response[0], 'rb') as temp_file:
                temp_headers = pickle.load(temp_file, encoding='latin1')

            code = 200
            if "x-ts" in temp_headers:
                code = int(temp_headers["x-ts"])

            headers_dict = {}
            for e in list(temp_headers):
                headers_dict[e] = temp_headers[e]

            if "Content-Length" in headers_dict:
                headers_dict["Content-Length"] = str(len(temp_content))

            flow.response = http.HTTPResponse.make (
                code,  # (optional) status code
                temp_content,  # (optional) content
                headers_dict)

            if requestUrl in requests:
                time_passed = int(int(sql_response[2])/1000.0 - (time.time()-requests[requestUrl])*1000)
                del requests[requestUrl]
                """
                if time_passed > 0:
                    print ("\n\n########## WAITING: {}\n\n".format(time_passed))
                    time.sleep(time_passed)
                """
            return

addons = [
    ReadProxy()
]
