from seleniumwire.webdriver import Chrome
from selenium.common.exceptions import NoSuchElementException, MoveTargetOutOfBoundsException, JavascriptException
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.by import By
from .exceptions.InteractionBotException import InteractionBotException
from .EventHandler import EventHandler
from .Event import Event
from .BrowserInteractions import BrowserInteractions


class DefaultEventHandler(EventHandler):
    def __try_double_click(self, base_url, element):
        try:
            BrowserInteractions.close_extraneous_tabs(self.browser, 1)
            click_cnt = 0
            while self.browser.current_url == base_url and click_cnt < 2:
                ActionChains(self.browser).move_to_element(element).click(element).perform()
                click_cnt += 1
                BrowserInteractions.close_extraneous_tabs(self.browser, 1)
        except:
            pass

    def set_browser(self, browser: Chrome) -> None:
        self.browser = browser

    def trigger_individual_event(self, event: Event) -> None:
        xpath = event.xpath
        event_type = event.event_type
        element = self.find_element_by_xpath(xpath)
        try:
            if event_type in ["click", "mousedown", "mouseup", "focus", "blur"]:
                base_url = self.browser.current_url
                ActionChains(self.browser).move_to_element(element).click(element).perform()
                self.__try_double_click(base_url, element)

            elif event_type in ["mouseover", "mouseenter"]:
                ActionChains(self.browser).move_to_element(element).perform()

            elif event_type in ["mouseout", "mouseleave"]:
                ActionChains(self.browser).move_to_element(element).perform()
                ActionChains(self.browser).move_by_offset(100, 100).perform()

            elif event_type in ["keydown", "keypress", "keyup", "input", "change"]:
                ActionChains(self.browser).move_to_element(element).send_keys("ABCD").perform()

            elif event_type in ["dblclick"]:
                ActionChains(self.browser).move_to_element(element).double_click(element).perform()

            elif event_type in ["drag", "dragstart", "dragend"]:
                ActionChains(self.browser).move_to_element(element).drag_and_drop_by_offset(element, 100, 0).perform()

            elif event_type in ["baseEvent"]:
                print("Base event triggered")

            else:
                raise InteractionBotException
        except (MoveTargetOutOfBoundsException, JavascriptException):
            pass
        except Exception:
            BrowserInteractions.close_extraneous_tabs(self.browser, 1)
            raise InteractionBotException from None
        finally:
            BrowserInteractions.close_extraneous_tabs(self.browser, 1)

    def find_element_by_xpath(self, xpath: str) -> object:
        web_element_found = False
        element = None

        while not web_element_found:
            try:
                element = self.browser.find_element(By.XPATH, xpath)
                web_element_found = True
            except NoSuchElementException:
                raise InteractionBotException
            except:
                raise InteractionBotException

        return element

