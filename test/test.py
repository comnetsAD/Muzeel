from seleniumwire import webdriver
from selenium.webdriver import ChromeOptions
import sys

url = sys.argv[1]

def interceptor(request):
    request.headers['init_url'] = url
    request.headers['solution'] = "original"

def interceptor_muzeel(request):
    request.headers['init_url'] = url
    request.headers['solution'] = "muzeel"

seleniumwire_options = {
    'proxy': {
        'http': 'http://127.0.0.1:9702',
        'https': 'https://127.0.0.1:9702',
        'no_proxy': 'localhost,127.0.0.1'
    }
}

seleniumwire_options_muzeel = {
    'proxy': {
        'http': 'http://127.0.0.1:9703',
        'https': 'https://127.0.0.1:9703',
        'no_proxy': 'localhost,127.0.0.1'
    }
}


chrome_options = ChromeOptions()
mobile_emulation = { "deviceName": "iPhone X" }
chrome_options.add_experimental_option("mobileEmulation", mobile_emulation)
chrome_options.add_argument("--ignore-certificate-errors")
chrome_options.add_argument("--no-sandbox")
chrome_options.add_argument("--disable-popup-blocking")

browser = webdriver.Chrome(options=chrome_options, seleniumwire_options=seleniumwire_options)
browser_muzeel = webdriver.Chrome(options=chrome_options, seleniumwire_options=seleniumwire_options_muzeel)
browser.request_interceptor = interceptor
browser_muzeel.request_interceptor = interceptor_muzeel
browser.get(url)
browser_muzeel.get(url)
input()
browser.close()
browser.quit()
browser_muzeel.close()
browser_muzeel.quit()
