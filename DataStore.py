import pymysql.cursors
import esprima
from EliminationUtils import EliminationUtils

"""A singleton data store"""


class DataStore:
    def __init__(self, url: str, db_details: map) -> None:
        self.url = url
        self.data_map = {}
        self.function_id_map = {}
        self.request_url_content_file_map = {}
        self.cache_directory = db_details.get("cache_directory", "")
        self.db = db_details.get("database", "db")
        self.connection = pymysql.connect(
            host=db_details.get("host", "localhost"),
            user=db_details.get("user", "root"),
            password=db_details.get("password", ""),
            port=db_details.get("port", 3306),
            database=self.db,
        )

        self.__populate_data_map()
        self.__populate_function_id_map()

    def __get_file_content(self, content_file_path: str) -> str:
        with open(self.cache_directory + "/" + content_file_path, "r") as file:
            return file.read()

    def __populate_data_map(self) -> None:
        print("Getting JS files for", self.url)
        with self.connection:
            with self.connection.cursor() as cursor:
                sql = "SELECT requestUrl, contFilePath FROM {}.cachedPages WHERE initiatingUrl='{}' AND updateFilePath IS NOT NULL".format(
                    self.db, self.url)
                cursor.execute(sql)
                result = cursor.fetchall()
                for js_file in result:
                    [request_url, content_file_path] = js_file
                    file_content = self.__get_file_content(content_file_path)
                    self.data_map[request_url] = {"original": file_content, "updated": file_content}
                    self.request_url_content_file_map[request_url] = content_file_path

    def __populate_function_id_map(self) -> None:
        print("Retrieving functions in JS files")
        for request_url in self.data_map:
            function_start_end_positions = []

            def esprima_delegate(node_property_info, start_end_position):
                if node_property_info.type == "FunctionDeclaration" or node_property_info.type == "FunctionExpression":
                    start_pos = node_property_info.body.range[0]
                    end_pos = node_property_info.body.range[1] - 1
                    function_id = "{} | {} | {}".format(request_url, start_pos, end_pos)
                    self.function_id_map[request_url].add(function_id)
                    function_start_end_positions.append([start_pos, end_pos])

            script_content = self.data_map[request_url]["original"]
            self.function_id_map[request_url] = set()
            try:
                esprima.parseModule(script_content, {"range": True, "tolerant": True}, esprima_delegate)
            except:
                pass
            self.__add_log_statements_to_update_file(request_url, function_start_end_positions)


    def __add_log_statements_to_update_file(self, request_url: str, function_start_end_positions: list) -> None:
        function_start_end_positions.sort()
        offset = 0
        for function_start_end_position in function_start_end_positions:
            [start_pos, end_pos] = function_start_end_position
            function_id = "{} | {} | {}".format(request_url, start_pos, end_pos)
            log_statement = "console.log('{}');".format(function_id)
            start_pos += offset
            end_pos += offset
            self.data_map[request_url]["updated"] = self.data_map[request_url]["updated"][:start_pos + 1] + log_statement + self.data_map[request_url]["updated"][start_pos+1:]
            offset += len(log_statement)

    def __remove_functions(self, request_url: str, start_end_position_list: list):
        script_content = self.data_map[request_url]["original"]
        offset = 0
        for start_end_position in start_end_position_list:
            [start_pos, end_pos] = start_end_position
            start_pos -= offset
            end_pos -= offset
            script_content = script_content[:start_pos+1] + script_content[end_pos:]
            offset += end_pos - start_pos - 1
        self.data_map[request_url]["updated"] = script_content

    def persist_updated_files(self):
        for request_url in self.data_map:
            content_file_path = self.request_url_content_file_map[request_url]
            update_file_path = content_file_path.split(".c")[0] + ".m"
            with open(self.cache_directory + "/" + update_file_path, "w") as update_file:
                update_file.write(self.data_map[request_url]["updated"])

    def remove_unused_functions(self, used_function_id_map: dict):
        unused_function_id_map = EliminationUtils.determine_unused_functions(self.function_id_map, used_function_id_map)
        for request_url in unused_function_id_map:
            start_end_list = EliminationUtils.convert_function_ids_to_start_end_list(unused_function_id_map[request_url])
            start_end_list = EliminationUtils.remove_nested_functions_from_start_end_list(start_end_list)
            self.__remove_functions(request_url, start_end_list)

