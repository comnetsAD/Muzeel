class LogParser:
    @staticmethod
    def parse_logs(logs: set, valid_request_urls: dict) -> set:
        function_id_map = {}
        for request_url in valid_request_urls:
            function_id_map[request_url] = set()
        for log in logs:
            try:
                function_id = log.split("\"")[1]
                request_url = LogParser.retrieve_request_url_from_function_id(function_id, valid_request_urls)
                function_id_map[request_url].add(function_id)
            except:
                pass
        return function_id_map

    @staticmethod
    def retrieve_request_url_from_function_id(function_id: str, valid_request_urls: dict) -> str:
        request_url = function_id.split(" | ")[0]
        if request_url in valid_request_urls:
            return request_url
        else:
            raise Exception("Not a valid function_id")

