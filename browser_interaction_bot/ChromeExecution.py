from os import makedirs, path, getcwd, remove, system
import psutil
from shutil import rmtree
from json import dumps
import time
from seleniumwire import webdriver
from selenium.webdriver import ChromeOptions
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities
from collections import deque
from .event_handling.BrowserInteractions import BrowserInteractions
from .HTMLDocumentUtil import HTMLDocumentUtil
from .event_handling.EventHandler import EventHandler
from .event_handling.Event import Event
from .event_handling.exceptions.InteractionBotException import InteractionBotException
from .DOTFileBuilder import DOTFileBuilder


class ChromeExecution:
    """This is the main dce class. Run the execute function to run dce.
    """
    def __init__(self, url: str, event_handler: EventHandler, output_file_directory: str = None, proxy_url: str = None, solution: str = "original"):
        """Constructor

        Args:
            url (str): The url of the page to be dead code eliminated
            event_handler (EventHandler): The event handler to used
            output_file_directory (str, optional): Where you want the output to b
            proxy_url (str, optional): [description]. Defaults to None.
            solution (str, optional): [description]. Defaults to "original".
        """
        self.url = url
        self.proxy_url = proxy_url
        self.output_file_directory = "screenshots" if output_file_directory is None else output_file_directory
        self.create_directory(self.output_file_directory)

        self.solution = solution
        self.screenshot_count = 0
        self.event_handler = event_handler
        self.logs = set()
        self.chrome_options = ChromeOptions()
        self.set_default_chrome_options()
        
        seleniumwire_options = {}
        if self.proxy_url:
            self.chrome_options.add_argument("--proxy-server="+self.proxy_url)
            seleniumwire_options = {
                'proxy': {
                    'http': 'http://'+self.proxy_url,
                    'https': 'https://'+self.proxy_url,
                    'no_proxy': 'localhost,127.0.0.1'
                }
            }

        if self.solution == "original":
            self.trace_file = open(self.output_file_directory + "/" + "trace", "w")

        self.desired_capabilities = DesiredCapabilities.CHROME
        self.desired_capabilities['goog:loggingPrefs'] = { 'browser':'ALL' }

        self.browser = webdriver.Chrome("/usr/bin/chromedriver", options=self.chrome_options, seleniumwire_options=seleniumwire_options, desired_capabilities=self.desired_capabilities)
        self.browser.request_interceptor = self.interceptor
        self.event_handler.set_browser(self.browser)
        self.dot_file_builder = DOTFileBuilder(self.output_file_directory)
        self.child_processes = self.determine_child_processes(self.browser.service.process.pid)
        self.start_time = time.time()

    def set_default_chrome_options(self) -> None:
        """Sets default chrome options, to see what's happening on the browser, comment out, the "--headless" line
        """
        mobile_emulation = { "deviceName": "iPhone X" }
        self.chrome_options.add_experimental_option("mobileEmulation", mobile_emulation)
        self.chrome_options.add_argument("--ignore-certificate-errors")
        self.chrome_options.add_argument("--no-sandbox")
        self.chrome_options.add_argument("--headless")
        self.chrome_options.add_argument("--user-data-dir={}".format(self.output_file_directory+"/chrome_data"))

    def determine_child_processes(self, process_id: int):
        """Determines child processes, useful in closing extraneous chrome windows after a crashes

        Args:
            process_id (int): The process id of the parent process
        """
        p = psutil.Process(process_id)
        return p.children(recursive=True)

    def create_directory(self, output_directory: str) -> None:
        if not path.exists(output_directory):
            makedirs(output_directory)

    def interceptor(self, request):
        """Interceptor used for selenium wire

        Args:
            request: A seleniumwire request
        """
        request.headers['init_url'] = self.url
        request.headers['solution'] = self.solution

    def screenshot(self) -> None:
        self.screenshot_count += 1
        BrowserInteractions.screenshot(self.browser, self.output_file_directory + "/" + str(self.screenshot_count))

    def write_to_trace_file(self, full_event_trace: list) -> None:
        self.trace_file.write(dumps(full_event_trace)+"\n")
        self.trace_file.flush()

    def get_logs(self) -> None:
        try:
            with open(self.output_file_directory+"/chrome_data/Default/chrome_debug.log") as log_file:
                self.logs = set(log_file.read().split("\n"))
            print(len(self.logs))
        except:
            pass
    
    def get_local_storage_keys(self) -> None:
        functions_called = self.browser.execute_script( \
            "var ls = window.localStorage, keys = []; " \
            "for (var i = 0; i < ls.length; ++i) " \
            "  keys[i] = ls.key(i); " \
            "return keys; ")
        print(len(functions_called))
        self.logs.update(functions_called)
        print(len(self.logs))
            

    def close_browser(self) -> None:
        try:
            self.browser.close()
            self.browser.quit()
        except:
            pass
    
    def remove_chrome_data(self) -> None:
        try:
            rmtree(self.output_file_directory+"/chrome_data")
        except:
            pass
    
    def open_page(self, url) -> str:
        try:
            url_loaded = BrowserInteractions.open_page(self.browser, self.url)
            BrowserInteractions.close_alert_accept(self.browser)
            return url_loaded
        except:
            self.restart()
            self.open_page(url)
    
    def force_close_process(self) -> None:
        for child in self.child_processes:
            try:
                child.terminate()
            except:
                pass
        
    def restart(self) -> None:
        self.force_close_process()
        self.remove_chrome_data()

        seleniumwire_options = {}
        if self.proxy_url:
            seleniumwire_options = {
                'proxy': {
                    'http': 'http://'+self.proxy_url,
                    'https': 'https://'+self.proxy_url,
                    'no_proxy': 'localhost,127.0.0.1'
                }
            }
        self.browser = webdriver.Chrome(options=self.chrome_options, seleniumwire_options=seleniumwire_options, desired_capabilities=self.desired_capabilities)
        self.browser.request_interceptor = self.interceptor
        self.event_handler.set_browser(self.browser)
        self.child_processes = self.determine_child_processes(self.browser.service.process.pid)

    def remove_chrome_data(self):
        try:
            rmtree(self.output_file_directory+"/chrome_data")
        except:
            pass

    def close_tools(self) -> None:
        self.get_logs()
        self.close_browser()
        self.force_close_process()
        self.remove_chrome_data()
        self.dot_file_builder.close()
        self.trace_file.close()

    def persist_state(self, event_queue, event_list) -> None:
        """This can be used to persist the current state after a crash

        Args:
            event_queue: The current event queue
            event_list: The current event list
        
        Potential update:
            One thing that should be added is the ability to restart after a crash from these persisted states.
        """
        with open(self.output_file_directory+"/event_queue.json", "w") as event_queue_file:
            event_queue_file.write(dumps([event.serialize_full_event_trace() for event in event_queue]))
        
        with open(self.output_file_directory+"/event_list.json", "w") as event_list_file:
            event_list_file.write(dumps([event.serialize_event() for event in event_list]))

    def execute(self) -> Event:
        self.url = self.open_page(self.url)
        BrowserInteractions.scroll_to_bottom(self.browser)
        self.get_logs()
        html_document_util = HTMLDocumentUtil(self.browser)
        event_list = html_document_util.event_list
        print("No of events:", len(event_list))
        base_event = Event("baseEvent", "/html/body")
        event_queue = deque()
        event_queue.append(base_event)

        while event_queue:
            has_child = False # used for dot file
            BrowserInteractions.refresh(self.browser)
            BrowserInteractions.scroll_to_top(self.browser)
            parent_event = event_queue.popleft()

            print("Parent", parent_event.xpath, parent_event.event_type)
            self.event_handler.trigger_event(parent_event)
            self.get_logs()
            self.write_to_trace_file(parent_event.serialize_full_event_trace())
            # self.screenshot()
            alert_closed = BrowserInteractions.close_alert_dismiss(self.browser)
            if alert_closed:
                self.open_page(self.url)
                self.dot_file_builder.add_node(parent_event.generate_full_dot_representation())
                continue

            i = len(event_list) - 1
            while i >= 0:
                event = event_list[i]
                print("{} {}".format(event.event_type, event.xpath))
                try:
                    self.event_handler.trigger_event(event)
                    BrowserInteractions.close_alert_dismiss(self.browser)
                    parent_event.add_child(event)
                    event_queue.append(event)
                    del event_list[i]
                    has_child = True
                    BrowserInteractions.refresh(self.browser)
                    self.event_handler.trigger_event(parent_event)
                    
                except InteractionBotException:
                    BrowserInteractions.close_alert_dismiss(self.browser)
                    
                finally:
                    i -= 1
                    # if time.time() - self.start_time > 3600:
                    #    self.persist_state([parent_event] + list(event_queue), event_list)
                    #    raise Exception("Timeout")

            if not has_child:
                self.dot_file_builder.add_node(parent_event.generate_full_dot_representation())
            print()
        
        for event in event_list:
            print("{} {}".format(event.event_type, event.xpath))
        
        print("Complete")
        self.get_logs()
        self.close_tools()
        return None