class Event:
    def __init__(self, event_type: str, xpath: str) -> None:
        self.event_type: str = event_type
        self.xpath: str = xpath
        self.predecessor_events: list[Event] = []
        self.children: list[Event] = []

    def add_child(self, event: '__class__') -> None:
        self.children.append(event)
        event.predecessor_events.extend(self.predecessor_events)
        event.predecessor_events.append(self)

    def serialize_event(self) -> dict:
        return {"event": self.event_type, "xpath": self.xpath}

    def serialize_full_event_trace(self) -> list:
        return_array = []
        for predecessor in self.predecessor_events:
            return_array.append(predecessor.serialize_event())
        return_array.append(self.serialize_event())
        return return_array

    def generate_dot_string(self) -> str:
        return "\"" + self.xpath + " | " + self.event_type + "\""

    def generate_full_dot_representation(self) -> str:
        return_string = ""
        for predecessor in self.predecessor_events:
            return_string += predecessor.generate_dot_string() + "->"
        return_string += self.generate_dot_string()
        return return_string










