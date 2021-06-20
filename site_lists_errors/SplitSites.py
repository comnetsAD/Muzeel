site_files = [open("site_list_"+str(i+1), "w") for i in range(10)]

completed_site_files = ["completed_sites_site_list_{}".format(i+1) for i in range(6)]

completed_set = set()
"""with open('error_log', 'r') as error_log:
    sites_w_errors = error_log.read().split("\n")
    completed_set |= set(sites_w_errors)

for completed_site_file in completed_site_files:
    with open(completed_site_file, "r") as completed_site:
        sites_completed = [i.split(",")[0] for i in completed_site.read().split("\n")]
        completed_set |= set(sites_completed)

print(len(completed_set))"""

with open("site_list", "r") as file:
    sites = [i.split(",")[0] for i in file.read().split("\n")]
    missing = 0
    cnt = 0
    for site in sites:
        if site not in completed_set:
            site_files[cnt].write(site+"\n")
            cnt = (cnt+1) % len(site_files)
        else:
            missing+=1

print(missing)

for i in site_files:
    i.close()
