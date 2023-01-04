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
index = 0
if len(sys.argv) >= 4:
    index = int(sys.argv[3])

error_log = open("errors_internal/error_log_"+site_list, "a")
completed_sites = open("results_internal/completed_sites_"+site_list, "a")

with open("sites_lists/"+site_list, "r") as site_list_file:
    sites = site_list_file.read().split("\n")

    for i, site in enumerate(sites):
        if i < index or site == '':
            continue
        
        print("Running", site)
        
        try:
            output_file_directory = "outputs_internal/" + site.replace("/","_")
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

