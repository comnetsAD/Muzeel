import sys
import time
from DataStore import DataStore
from LogParser import LogParser
from browser_interaction_bot.ChromeExecution import ChromeExecution
from browser_interaction_bot.event_handling.DefaultEventHandler import DefaultEventHandler
from MainExecution import execute

db_details = {
    "database": "clonedSites",
    "password": "password",
    "cache_directory": "/media/yasir/externalDrive/ubuntuBK/yasir/IMC_LUMS_NYUAD_2021/",
    "port": 9922
}

site_list = sys.argv[1]
error_log = open("error_log_retried", "a")
completed_sites = open("completed_sites_errors_"+site_list, "a")


with open("site_lists_errors/"+site_list, "r") as site_list_file:
    sites = site_list_file.read().split("\n")

    for site in sites:
        print("Running", site)
        
        try:
            output_file_directory = "outputs/" + site.replace("/","_")
            start = time.time()
            execute(site, db_details, proxy_url="127.0.0.1:9345", output_file_directory=output_file_directory)
            end = time.time()
            completed_sites.write("{}, {}\n".format(site, end-start))
            completed_sites.flush()

        except Exception as e:
            print(e)
            error_log.write(site + ", {}\n".format(e))
            error_log.flush()

error_log.close()
completed_sites.close()

