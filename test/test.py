from seleniumwire import webdriver
from selenium.webdriver import ChromeOptions
import sys

url = sys.argv[1]

def interceptor(request):
    request.headers['init_url'] = url
    request.headers['solution'] = "original"

seleniumwire_options = {
    'proxy': {
        'http': 'http://127.0.0.1:8080',
        'https': 'https://127.0.0.1:8080',
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
browser.request_interceptor = interceptor
browser.get(url)
