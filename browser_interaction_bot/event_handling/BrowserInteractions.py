from selenium.webdriver import Chrome
from selenium.webdriver.support.ui import WebDriverWait
from selenium.common.exceptions import NoSuchWindowException, UnexpectedAlertPresentException
from time import sleep, time
import psutil


class BrowserInteractions:
    @classmethod
    def open_page(cls, browser: Chrome, url: str, retry_count: int = 0) -> str:
        try:
            browser.get(url)
            cls.wait_for_page_load(browser)
        except UnexpectedAlertPresentException:
            pass
        except Exception as e:
            if retry_count < 5:
                print("Retrying page load, error occurred", e)
                cls.wait(3)
                return cls.open_page(browser, url, retry_count+1)
            else:
                raise e
        return browser.current_url
    
    @classmethod
    def refresh(cls, browser: Chrome) -> None:
        browser.refresh()
        cls.close_alert_accept(browser)
        cls.wait_for_page_load(browser)

    @classmethod
    def wait_for_page_load(cls, browser: Chrome) -> None:
        start_time = time()
        try:
            WebDriverWait(browser, 40).until(browser.execute_script("return document.readyState") == "complete")
        except:
            browser.execute_script("return window.stop();")
        cls.wait(2)
        cls.prevent_page_change(browser)

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
    def prevent_page_change(cls, browser: Chrome):
        js = """try {
                    window.addEventListener('beforeunload', function(e) {
                        e.preventDefault();
                        e.stopPropagation();
                        e.returnValue = '';
                    });
                }
                catch (err) { }
        """
        browser.execute_script(js)

    @classmethod
    def screenshot(cls, browser: Chrome, file_name: str):
        cls.wait(5)
        browser.save_screenshot(file_name+".png")

    @classmethod
    def close_alert_dismiss(cls, browser: Chrome):
        try:
            alert = browser.switch_to.alert
            alert.dismiss()
            return True
        except:
            print("No alert")
            return False

    @classmethod
    def close_alert_accept(cls, browser: Chrome):
        try:
            alert = browser.switch_to.alert
            alert.accept()
            return True
        except:
            print("No alert")
            return False

    @staticmethod
    def wait(seconds: int) -> None:
        sleep(seconds)