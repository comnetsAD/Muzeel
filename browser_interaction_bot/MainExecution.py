from ChromeExecution import ChromeExecution
from ChromeExecutionFromTrace import ChromeExecutionFromTrace
from event_handling.DefaultEventHandler import DefaultEventHandler
# ChromeExecution("https://colorado.edu", DefaultEventHandler()).execute()
ChromeExecutionFromTrace("https://colorado.edu", DefaultEventHandler(), "lacuna", trace_file_name="screenshots/trace")\
    .execute()
