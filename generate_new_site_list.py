completed_site_files = ["completed_sites_site_list_{}".format(i+1) for i in range(6,9)]
original_site_lists = ["site_lists/site_list_{}".format(i+1) for i in range(6,9)]

completed_set = set()
with open('error_log', 'r') as error_log:
    sites_w_errors = [i.split(",")[0] for i in error_log.read().split("\n")]
    completed_set |= set(sites_w_errors)


for completed_site_file in completed_site_files:
    with open(completed_site_file, "r") as completed_site:
        sites_completed =  [i.split(",")[0] for i in completed_site.read().split("\n")]
        completed_set |= set(sites_completed)

remaining_sites = set()
for original_site_file in original_site_lists:
    with open(original_site_file, "r") as original_site:
        original_sites = [i.split(",")[0] for i in original_site.read().split("\n")]
        for site in original_sites:
            if site not in completed_set:
                remaining_sites.add(site)

site_files = [open("site_list_{}".format(i+1), 'w') for i in range(6,9)]
cnt = 0
for i in remaining_sites:
    site_files[cnt].write(i+'\n')
    cnt = (cnt+1) % len(site_files)

for i in site_files:
    i.close()


print(len(completed_set))