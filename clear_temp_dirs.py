import time
import os
import shutil

while True:
    completed_site_files = ["completed_sites_errors_site_list_{}".format(i+1) for i in range(3)]
    completed_set = set()
    with open('error_log_retried', 'r') as error_log:
        sites_w_errors = [i.split(",")[0] for i in error_log.read().split("\n")]
        completed_set |= set(sites_w_errors)


    for completed_site_file in completed_site_files:
        with open(completed_site_file, "r") as completed_site:
            sites_completed =  [i.split(",")[0] for i in completed_site.read().split("\n")]
            completed_set |= set(sites_completed)

    site_folders = os.listdir('outputs')
    print(len(completed_set))
    for site_folder in site_folders:
        actual_url = site_folder.replace("_", "/")
        if actual_url in completed_set:
            # Remove chrome_data
            chrome_data_dir = "outputs/"+ site_folder + "/chrome_data"
            if os.path.isdir(chrome_data_dir):
                print("Removing chrome_data", site_folder)
                shutil.rmtree(chrome_data_dir)

    time.sleep(600)