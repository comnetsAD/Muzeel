import os
from DataStore import DataStore
from LogParser import LogParser
from browser_interaction_bot.ChromeExecution import ChromeExecution
from browser_interaction_bot.event_handling.DefaultEventHandler import DefaultEventHandler


def execute(site: str, db_details: dict, proxy_url: str, output_file_directory: str =None) -> None:
    data_store = DataStore(site, db_details)
    data_store.persist_updated_files()
    chrome_execution = ChromeExecution(site, DefaultEventHandler(), proxy_url=proxy_url, output_file_directory=os.path.abspath(output_file_directory))
    
    try:
        chrome_execution.execute()
        used_function_id_map = LogParser.parse_logs(chrome_execution.logs, data_store.request_url_content_file_map)
        data_store.remove_unused_functions(used_function_id_map)
        data_store.persist_updated_files()

    except Exception as e:
        chrome_execution.close_tools()
        used_function_id_map = LogParser.parse_logs(chrome_execution.logs, data_store.request_url_content_file_map)
        data_store.remove_unused_functions(used_function_id_map)
        data_store.persist_updated_files()
        raise e
        
    