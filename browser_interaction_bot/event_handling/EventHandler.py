from abc import ABC, abstractmethod
from .Event import Event
from selenium.webdriver import Chrome



class EventHandler(ABC):
    @abstractmethod
    def set_browser(self, browser: Chrome):
        pass

    @abstractmethod
    def trigger_individual_event(self, event: Event):
        pass

    def trigger_event(self, event: Event):
        for predecessor in event.predecessor_events:
            self.trigger_individual_event(predecessor)
        self.trigger_individual_event(event)