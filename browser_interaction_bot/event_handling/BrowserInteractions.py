from selenium.webdriver import Chrome
from selenium.common.exceptions import NoSuchWindowException, UnexpectedAlertPresentException
from time import sleep


class BrowserInteractions:
    @classmethod
    def open_page(cls, browser: Chrome, url: str):
        try:
            browser.get(url)
            cls.wait_for_page_load(browser)
        except UnexpectedAlertPresentException:
            pass
        return browser.current_url

    @classmethod
    def wait_for_page_load(cls, browser: Chrome) -> None:
        load_state = browser.execute_script("return document.readyState")
        while load_state != "complete":
            load_state = browser.execute_script("return document.readyState")
        cls.wait(2)

    @classmethod
    def scroll_to_top(cls, browser: Chrome):
        browser.execute_script("window.scrollTo(0, 0)")
        cls.wait(1)

    @classmethod
    def scroll_to_bottom(cls, browser: Chrome):
        js = 'return Math.max( document.body.scrollHeight, document.body.offsetHeight,  ' \
             'document.documentElement.clientHeight,  document.documentElement.scrollHeight,  ' \
             'document.documentElement.offsetHeight); '
        scroll_height = browser.execute_script(js)
        offset = 0
        while offset < scroll_height:
            browser.execute_script("window.scrollTo(0, %s);" % offset)
            cls.wait(5)
            offset += browser.get_window_size()['height']*1/3

    @classmethod
    def close_extraneous_tabs(cls, browser: Chrome, limit: int):
        if len(browser.window_handles) < limit:
            return
        else:
            try:
                original_handle = browser.current_window_handle
                for handle in browser.window_handles:
                    if handle != original_handle:
                        browser.switch_to.window(handle)
                        browser.close()
                browser.switch_to.window(original_handle)
            except NoSuchWindowException:
                print("Window already closed")

    @classmethod
    def screenshot(cls, browser: Chrome, file_name: str):
        cls.wait(5)
        browser.save_screenshot(file_name+".png")

    @staticmethod
    def wait(seconds: int) -> None:
        sleep(seconds)