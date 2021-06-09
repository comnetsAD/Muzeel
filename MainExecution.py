from DataStore import DataStore
from LogParser import LogParser
from browser_interaction_bot.ChromeExecution import ChromeExecution
from browser_interaction_bot.event_handling.DefaultEventHandler import DefaultEventHandler

db_details = {
    "database": "deadcode",
    "password": "password",
    "cache_directory": "/Users/tofunmi/Documents/Lacuna/proxies/data"
}

data_store = DataStore("https://www.colorado.edu/", db_details)
data_store.persist_updated_files()
chrome_execution = ChromeExecution("https://www.colorado.edu/", DefaultEventHandler(), proxy_url="127.0.0.1:8080")
chrome_execution.execute()
used_function_id_map = LogParser.parse_logs(chrome_execution.logs, data_store.request_url_content_file_map)
data_store.remove_unused_functions(used_function_id_map)
data_store.persist_updated_files()

