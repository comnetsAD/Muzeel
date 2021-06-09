import json
from ChromeExecution import ChromeExecution
from event_handling.DefaultEventHandler import DefaultEventHandler
from event_handling.Event import Event
from event_handling.BrowserInteractions import BrowserInteractions
from event_handling.exceptions.InteractionBotException import InteractionBotException


class ChromeExecutionFromTrace(ChromeExecution):
    def __init__(self, url: str, event_handler: DefaultEventHandler, solution: str, output_file_directory: str = None, proxy_url: str = None, trace_file_name: str = None):
        if not output_file_directory:
            output_file_directory = "screenshots_trace"

        super().__init__(url, event_handler, output_file_directory, proxy_url, solution=solution)
        self.trace_file = open(trace_file_name, "r")

    def execute(self) -> Event:
        for line in self.trace_file.read().split("\n"):
            self.url = BrowserInteractions.open_page(self.browser, self.url)
            BrowserInteractions.scroll_to_top(self.browser)
            event_trace = json.loads(line)
            for serialized_event in event_trace:
                event = Event(serialized_event["event"], serialized_event["xpath"])
                try:
                    self.event_handler.trigger_event(event)
                except InteractionBotException:
                    print("Error occurred")
            self.screenshot()
        self.close_tools()
        return None

