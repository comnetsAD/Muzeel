from selenium.webdriver import Chrome
from selenium.webdriver.support.ui import WebDriverWait
from selenium.common.exceptions import NoSuchWindowException, UnexpectedAlertPresentException
from .config import MAX_RETRIES_AFTER_ERROR, PAGE_LOAD_WAIT_TIME
from time import sleep, time
import psutil


class BrowserInteractions:
    @classmethod
    def open_page(cls, browser: Chrome, url: str, retry_count: int = 0) -> str:
        """Opens a page and waits for it to load

        Args:
            browser (Chrome): The selenium driver object
            url (str): The url to open
            retry_count (int, optional): This is the number of times the page has been retried, it is used internally. Defaults to 0.

        Raises:
            Exception: Exceptions arise primarily after selenium crashes 

        Returns:
            str: The url of the page after successful load
        """
        try:
            browser.get(url)
            cls.wait_for_page_load(browser)
        except UnexpectedAlertPresentException:
            pass
        except Exception as e:
            if retry_count < MAX_RETRIES_AFTER_ERROR:
                print("Retrying page load, error occurred", e)
                cls.wait(3)
                return cls.open_page(browser, url, retry_count+1)
            else:
                raise e
        return browser.current_url
    
    @classmethod
    def refresh(cls, browser: Chrome) -> None:
        """Refreshes the page

        Args:
            browser (Chrome): The selenium driver object
        """
        browser.refresh()
        cls.close_alert_accept(browser)
        cls.wait_for_page_load(browser)

    @classmethod
    def wait_for_page_load(cls, browser: Chrome) -> None:
        """Waits for page load, scans document.readyState. Waits a maxiumum of 40 seconds

        Args:
            browser (Chrome): The selenium driver object

        Potential update:
        Could look into a better way of waiting for page load. It could be that the 40 seconds may not be enough of a load time, you can toggle the
        constant in the config.py file.
        """
        start_time = time()
        try:
            WebDriverWait(browser, PAGE_LOAD_WAIT_TIME).until(browser.execute_script("return document.readyState") == "complete")
        except:
            browser.execute_script("return window.stop();")
        cls.wait(2)
        cls.prevent_page_change(browser)

    @classmethod
    def scroll_to_top(cls, browser: Chrome):
        """This scrolls to the top of the page. Primarily used after page load.

        Args:
            browser (Chrome): The selenium driver object
        """
        browser.execute_script("window.scrollTo(0, 0)")
        cls.wait(1)

    @classmethod
    def scroll_to_bottom(cls, browser: Chrome):
        """Scrolls progressively to the bottom of the page, waiting at portions.

        Args:
            browser (Chrome): The selenium driver object

        Potential update:
        Consider waiting longer at each stage during scrolling? Not fully necessary though. To do this, you can modify the cls.wait()
        """

        js = 'return Math.max( document.body.scrollHeight, document.body.offsetHeight,  ' \
             'document.documentElement.clientHeight,  document.documentElement.scrollHeight,  ' \
             'document.documentElement.offsetHeight); '
        scroll_height = browser.execute_script(js)
        offset = 0
        while offset < scroll_height:
            browser.execute_script("window.scrollTo(0, %s);" % offset)
            cls.wait(2)
            offset += int(browser.get_window_size()['height']*1/3)

    @classmethod
    def close_extraneous_tabs(cls, browser: Chrome, limit: int):
        """This closes tabs outside the current

        Args:
            browser (Chrome): The selenium driver object
            limit (int): The number of tabs you want left open
        """
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
        """This prevents a page from changing when a link is clicked.

        Args:
            browser (Chrome): The selenium driver object
        """
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
        """This closes an alert by clicking dismiss

        Args:
            browser (Chrome): The selenium driver object

        Potential update:
            Sometimes crashes occur because an alert is open at the time the page initially loads.
            You could try to wait to see if an alert is open on page load and close it.
        """
        try:
            alert = browser.switch_to.alert
            alert.dismiss()
            return True
        except:
            print("No alert")
            return False

    @classmethod
    def close_alert_accept(cls, browser: Chrome):
        """This closes an alert by clicking accept

        Args:
            browser (Chrome): The selenium driver object
        """
        try:
            alert = browser.switch_to.alert
            alert.accept()
            return True
        except:
            print("No alert")
            return False

    @staticmethod
    def wait(seconds: int) -> None:
        """Causes the thread to sleep for specified seconds

        Args:
            seconds (int): seconds to sleep for
        """
        sleep(seconds)