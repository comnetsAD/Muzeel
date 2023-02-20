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
import typing
import sys

sys.path.append("..")
from config import db_details
sys.path.append(".")

requests = {}

class CacheProxy:
    def parseUrl(self, url):
            # Attempt to insert, there is a unique condition so if it faily, it fails
            parsedUrl = urlparse(url)
            if parsedUrl.path == '': 
                parsedUrl = urlparse(url+"/") # Remove descrepancies between "/" and "" ending urls
            return parsedUrl.scheme + "://" + parsedUrl.netloc + parsedUrl.path

    def load(self, loader):
        loader.add_option(name = "dbHost", typespec = str, default = "127.0.0.1", help = "Provide the host for the cache db, use dbHost")
        loader.add_option(name = "dbPort", typespec = int, default= db_details["port"], help = "Provide port for the cache db, use dbPort")
        loader.add_option(name= "dbName", typespec = str, default = db_details["database"], help = "Provide the db name, use dbName")
        loader.add_option(name = "dbUser", typespec = str, default = db_details["username"], help = "Provide the user for the cache db, use dbUser")
        loader.add_option(name= "dbPassword", typespec = str, default = db_details["password"], help = "Provide the password for the cache db, use dbPassword")
        loader.add_option(name= "cacheDirectory", typespec = str, default=db_details["cache_directory"]+"/data/", help = "Provide the directory to cache the pages")

    def running(self):
        self.connection = pymysql.connect(host=ctx.options.dbHost,
                             user=ctx.options.dbUser,
                             port=ctx.options.dbPort,
                             password=ctx.options.dbPassword,
                             db=ctx.options.dbName,
                             autocommit=True)    

    def log(self, entry):
        del entry


    def request(self, flow: http.HTTPFlow) -> None:
        # store the request time
        requestUrl = flow.request.pretty_url.split("?")[0]
        requests[requestUrl] = time.time()
        flow.initiatingUrl = None
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
            return
        else:
            print ("--------- CACHE HIT {} -----------".format(requestUrl))

            if sql_response[1] != None:
                with open(ctx.options.cacheDirectory + sql_response[1], 'rb') as temp_file:
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

            # TODO: Validate content length
            if "Content-Length" in headers_dict:
                headers_dict["Content-Length"] = str(len(temp_content))

            flow.response = http.Response.make (
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

    def response(self, flow: http.HTTPFlow) -> None:
        # randomize filename
        name = flow.request.pretty_url.split("?")[0]
        # flow.response.headers["dbPassword"] = str(ctx.options.dbPassword)
        if flow.initiatingUrl:
            try:
                with self.connection.cursor() as cursor:
                    requestUrl = flow.request.pretty_url.split("?")[0]

                    query_template_search = query_template_search = "SELECT headFilePath, contFilePath, delay FROM cachedPages WHERE requestUrl = '{0}' AND initiatingUrl = '{1}'".format(requestUrl, flow.initiatingUrl)

                    cursor.execute(query_template_search)
                    sql_response = cursor.fetchone()

            finally:
                cursor.close()
                
            # if not hit, store the element in the DB, also check if we are not currently running the test
            if not sql_response:
                isJavascript = False
                try:
                    ttt = flow.response.headers["Content-Type"].split(";")[0]
                    if "javascript" in ttt:
                        isJavascript = True
                except:
                    ttt = "None"

                if name in requests:
                    time_passed = int((time.time()-requests[name])*1000)
                    del requests[name]
                else:
                    time_passed = -1

                name = binascii.b2a_hex(os.urandom(15)).decode("utf-8")
                while os.path.exists(ctx.options.cacheDirectory + name):
                    name = binascii.b2a_hex(os.urandom(15)).decode("utf-8")

                # modified by Gabriel: insert into DB

                header_path = name+".h"
                content_path = name+".c"
                update_path = name+".u"

                try:
                    with self.connection.cursor() as cursor:
                        if isJavascript:
                            query_template_insert = "INSERT INTO cachedPages (initiatingUrl, requestUrl, headFilePath, contFilePath, updateFilePath, type, delay) VALUES (%s, %s, %s, %s, %s, %s, %s)"
                            cursor.execute(query_template_insert,
                                        (flow.initiatingUrl, flow.request.pretty_url.split("?")[0], header_path, content_path, update_path, ttt, time_passed))
                        else:
                            query_template_insert = "INSERT INTO cachedPages (initiatingUrl, requestUrl, headFilePath, contFilePath, type, delay) VALUES (%s, %s, %s, %s, %s, %s)"
                            cursor.execute(query_template_insert,
                                        (flow.initiatingUrl, flow.request.pretty_url.split("?")[0], header_path, content_path, ttt, time_passed))

                finally:
                    cursor.close()

                print ("\n\n--------- CACHE CLONE {} -----------\n\n".format(requestUrl))

                with open(ctx.options.cacheDirectory + header_path, 'wb') as temp_file:
                    pickle.dump(flow.response.headers, temp_file)

                with open(ctx.options.cacheDirectory + content_path, 'wb') as temp_file:
                    temp_file.write(flow.response.content)
                    temp_file.close()

                if isJavascript:
                    with open(ctx.options.cacheDirectory + update_path, 'wb') as temp_file:
                        temp_file.write(flow.response.content)
                        temp_file.close()

addons = [
    CacheProxy()
]