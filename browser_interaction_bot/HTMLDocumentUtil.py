from bs4 import BeautifulSoup
from bs4.element import Tag
from selenium.webdriver import Chrome
from selenium.common.exceptions import WebDriverException
from .event_handling.Event import Event


class HTMLDocumentUtil:
    def __init__(self, browser: Chrome):
        self.browser = browser
        self.doc = BeautifulSoup(self.browser.page_source, 'html.parser', multi_valued_attributes=None)
        self.event_list = []
        self.global_xpath_map = {}
        self.dfs(self.doc.find_all("body")[0], "/html/body")

    def dfs(self, root: Tag, xpath: str) -> None:
        if xpath != "/html/body":
            listeners = self.get_event_listeners_by_xpath(xpath)

            for listener in listeners:
                event = Event(listener['type'], xpath)
                self.event_list.append(event)

        child_map = {}
        for child in root.contents:
            if child.name:
                tag_name = child.name

                if tag_name not in ["link", "script", "style", "svg", "img", "noscript"]:
                    
                    if tag_name == "a" and "href" in child.attrs:
                        if not (child['href'].strip() == "" or child["href"].startswith("#") or child["href"].startswith("/#")):
                            continue
                    
                    curr_tag_index = child_map.get(tag_name, 0) + 1
                    child_map[tag_name] = curr_tag_index

                    if "id" in child.attrs:
                        child_xpath = "//{}[@id='{}']".format(tag_name, child['id'])
                        global_index_of_child = self.global_xpath_map.get(child_xpath, 0) + 1
                        self.global_xpath_map[child_xpath] = global_index_of_child
                        self.dfs(child, "({})[{}]".format(child_xpath, global_index_of_child))

                    elif "class" in child.attrs:
                        child_xpath = "//{}[@class='{}']".format(tag_name, child['class'])
                        global_index_of_child = self.global_xpath_map.get(child_xpath, 0) + 1
                        self.global_xpath_map[child_xpath] = global_index_of_child
                        self.dfs(child, "({})[{}]".format(child_xpath, global_index_of_child))

                    else:
                        self.dfs(child, "{}/{}[{}]".format(xpath, tag_name, curr_tag_index))

    def get_event_listeners_by_xpath(self, xpath: str) -> list:
        try:
            xpath_to_object_id_query = {"expression" : "document.evaluate(\"{}\",document,null,XPathResult.ORDERED_NODE_SNAPSHOT_TYPE,null).snapshotItem(0)".format(xpath)}
            object_id = self.browser.execute_cdp_cmd("Runtime.evaluate", xpath_to_object_id_query)['result']
            listeners = self.browser.execute_cdp_cmd("DOMDebugger.getEventListeners", object_id)
            return listeners['listeners']
        except WebDriverException:
            print("Trouble locating xpath", xpath)
            return []