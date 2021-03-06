import sys
import time
from DataStore import DataStore
from LogParser import LogParser
from browser_interaction_bot.ChromeExecution import ChromeExecution
from browser_interaction_bot.event_handling.DefaultEventHandler import DefaultEventHandler
from MainExecution import execute
from config import db_details

site_list = sys.argv[1]
proxy_port = sys.argv[2]
error_log = open("results/error_log", "a")
completed_sites = open("results/completed_sites_"+site_list, "a")

with open("sites_lists/"+site_list, "r") as site_list_file:
    sites = site_list_file.read().split("\n")

    for site in sites:
        print("Running", site)
        
        try:
            output_file_directory = "outputs/" + site.replace("/","_")
            start = time.time()
            execute(site, db_details, proxy_url="127.0.0.1:{}".format(proxy_port), output_file_directory=output_file_directory)
            end = time.time()
            completed_sites.write("{}, {}\n".format(site, end-start))
            completed_sites.flush()

        except Exception as e:
            print(e)
            error_log.write(site + ", {}\n".format(e))
            error_log.flush()

error_log.close()
completed_sites.close()

