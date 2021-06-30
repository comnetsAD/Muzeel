import os
import shutil
log = open("faulty_but_workable", "w")
with open("successful", "r") as already_covered_file:
    already_covered_set = set([i.split(",")[0] for i in already_covered_file.read().split("\n")])
    site_folders = os.listdir('outputs')
    for site_folder in site_folders:
        site_name = site_folder.replace("_", "/")
        if site_name not in already_covered_set:
            try:
                with open("outputs/"+site_folder+"/trace") as trace_file:
                    if len(trace_file.read().split("\n")) > 1:
                        log.write(site_name+"\n")
                        shutil.copytree("outputs/"+site_folder, "outputs_transfer/"+site_folder)
            except Exception as e:
                print(e)
                pass

log.close()