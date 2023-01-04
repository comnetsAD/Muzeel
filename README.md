# Muzeel: Assessing the impact of JavaScript dead code elimination on mobile web performance

Muzeel is a framework for the identification and elimination of unused JavaScript functions, also known as "deadcode". It is a black-box approach requiring neither knowledge of the code nor execution traces. The core design principle of Muzeel is to address the challenge of dynamically analyzing JavaScript after the page is loaded, by emulating all possible user interactions with the page, such that the used functions (executed when interactivity events fire) are accurately identified, whereas unused functions are filtered out and eliminated.

## Paper
You can find the paper [here].
You can watch the presentation of Muzeel on this [video].

## Instructions

Install MySQL and an easy GUI that will allow you to access the DB, e.g., phpMyAdmin (Ubuntu), or DBeaver (MacOS).

Import the DB template into your MySQL under the DB name "muzeel". This should create a table called "cachedPages" with various columns.

### Create the list of sites

Inside the "sites_lists" folder you can create a text file of the sites that you are interested in running Muzeel on. In principle one can create multiple lists if you intend to run them in parallel to speed things up. Make sure that each site URL is on a separate line, and each site URL ends with a "/".


### Update Muzeel configurations

Edit the config.py file to reflect the configurations that you have chosen. There are five main parameters to configure: 1) DB name, 2) MySQL username, 3) MySQL password, 4) Full path to the Muzeel git repo, and 5) the MySQL port number (default 3306).

### Install dependencies
pip3 install mitmdump esprima selenium-wire pymysql==0.10.1 markupsafe==1.1.0

### Clone the sites 

In a separate terminal run the caching proxy as:
````` sh
cd muzeel/proxies/
mitmdump -s cache_proxy.py --set block_global=false --ssl-insecure --set upstream-cert=false --listen-port 9701
`````

Make sure that the proxy is not throwing any errors and that it is showing the following message "Proxy server listening at http://*:9701"

Now, in a separate terminal, run the scraper code as:
````` sh
cd muzeel
python3 scraper.py 9701 sites_lists/site_list_1
`````

This should go over the list of sites that are listed in site_list_1, and then opens each page in chrome while scrolling through the site. At the end you should be able to see several entries in the DB, as well as seeing multiple files inside the data folder (with .c, .h, and .u extensions).


### Running Muzeel to eliminate deadcode

In a separate terminal run the caching proxy as:
````` sh
cd muzeel/proxies/
mitmdump -s read_proxy.py --set block_global=false --ssl-insecure --set upstream-cert=false --listen-port 9700
`````

Make sure that the proxy is not throwing any errors and that it is showing the following message "Proxy server listening at http://*:9700"

Now, in a separate terminal, run the scraper code as:
````` sh
cd muzeel
python3 run_test.py site_list_1 9700
`````

By the end of this, you should be able to see the deadcode eliminated JavaScript files stored inside /data/muzeel, each with a .m extension.

[here]: <https://dl.acm.org/doi/10.1145/3517745.3561427>
[video]: <https://iframe.videodelivery.net/eyJraWQiOiI3YjgzNTg3NDZlNWJmNDM0MjY5YzEwZTYwMDg0ZjViYiIsImFsZyI6IlJTMjU2In0.eyJzdWIiOiJlZDI0ZTFlYjQ3NGQwMjA4NmQ3ZWZkYTc5NGNlMGQzMSIsImtpZCI6IjdiODM1ODc0NmU1YmY0MzQyNjljMTBlNjAwODRmNWJiIiwiZXhwIjoxNjcyODQ1NzU0fQ.a39D0zQ4eIy4ObEF6RQIh4tCIgaiv4zjjV3aGNarL0h-HoFXUJVkSgpkSRSzhaAHxFB7k8oCAcuAE-rOYm-1JpvC2AkkqRXS1G0N-a7i9r--a3oAl0q-H-WpPlAkPafq7mUdbiTh3AL-Wgwi3FaKpuLKlzemvHUtITC3D9WiNkhWcobXkzNzRATOonVHFIw1zjUWdTDkODZjLzxozyZonmsjiiCYVB31nlqK1zf9TpcBw7Beitcv1Ri0LTeNjQRFEXGm9pjHu8MZBRglbq1wfzTrFs33gy-Ox94bmylOZx5FgWIha_yFKxHcCIiCfm1q8rWHOwvQMcYEytnM7k6HPg>
