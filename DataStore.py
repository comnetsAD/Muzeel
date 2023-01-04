import pymysql.cursors
import esprima
from EliminationUtils import EliminationUtils
import os
"""Data store for the JS files, both the original and updated"""


class DataStore:
    def __init__(self, url: str, db_details: map) -> None:
        """Initializes data store"""
        self.url = url # Url of the page being processed
        self.data_map = {} # Map of form {request_url: {"original": original_code, "updated": updated_code}}
        self.function_id_map = {} # Map of form {request_url: set(function_identifiers)}. For each request_url, we keep the set of function identifiers in the file, 
        self.request_url_content_file_map = {} # Map of form {request_url: file_path_of_original_code }. Makes retrieval easier
        self.cache_directory = db_details.get("cache_directory", "")+"/data/" # Directory of folder where data is cached.
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
        """Retrieves file content from file path

        Parameters:
        content_file_path (int): Path to file containing the original source code

        Returns:
        str: File content
        """

        with open(self.cache_directory + "/" + content_file_path, "r", errors="ignore") as file:
            return file.read()

    def __populate_data_map(self) -> None:
        """Populates the data map. For each Javascript file requested by the page, we keep a map of the request_url to the content of the original file 
        as well as the updated file content (the file content Muzeel updates as it carries out dce).

        This is stored in the form {request_url: {"original": original_file_content, "updated": updated_file_content }}

        This function also populates the request_url_content_file_map
        """

        print("Getting JS files for", self.url)

        with self.connection.cursor() as cursor:
            sql = "SELECT requestUrl, contFilePath FROM {0}.cachedPages WHERE (initiatingUrl='{1}' OR initiatingUrl='{1}/') AND updateFilePath IS NOT NULL".format(
                self.db, self.url)
            cursor.execute(sql)
            result = cursor.fetchall()
            for js_file in result:
                [request_url, content_file_path] = js_file
                file_content = self.__get_file_content(content_file_path)
                print(content_file_path)
                self.data_map[request_url] = {"original": file_content, "updated": file_content}
                self.request_url_content_file_map[request_url] = content_file_path

    def __populate_function_id_map(self) -> None:
        """Populates the function_id_map. We maintain a function_id set for each javascript file requested by the page.
        Function ids are composed of "request_url | function_start_byte_offset | function_end_byte_offset".
        After the function_id_map is populated, log statements are added to the updated content file in the data_map by calling __add_log_statements_to_update_file. 
        """

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
            except Exception as e:
                print("There is an error in instrumentation", request_url, e)
                pass
            self.__add_log_statements_to_update_file(request_url, function_start_end_positions)


    def __add_log_statements_to_update_file(self, request_url: str, function_start_end_positions: list) -> None:
        """Adds log statements which outputs the function identifier of each function in the javascript file corresponding to request_url.
        We store function identifiers in localStorage so we don't reprint them multiple times -- this protects against slowdown/overrunning the console log.
        
        Parameters:
        request_url (str): This is the url of the javascript file we want to add the log statements to
        function_start_end_positions (list): This is a list of start and end positions of all functions in the javascript file

        Potential update: 
        Sometimes localStorage can get overloaded leading to crashes, it is a rare occurrence but consider finding a way to deal with this.
        """
        function_start_end_positions.sort()
        offset = 0
        for function_start_end_position in function_start_end_positions:
            [start_pos, end_pos] = function_start_end_position
            function_id = "{} | {} | {}".format(request_url, start_pos, end_pos)
            log_statement = "if (!localStorage.getItem('"+function_id+"')) { localStorage.setItem('"+function_id+"', true); console.log('"+function_id+"');}"
            # log_statement = "/* testing */"
            start_pos += offset
            end_pos += offset
            self.data_map[request_url]["updated"] = self.data_map[request_url]["updated"][:start_pos + 1] + log_statement + self.data_map[request_url]["updated"][start_pos+1:]
            offset += len(log_statement)

    def remove_unused_functions(self, used_function_id_map: dict):
        """This removes unused functions from a javascript file.
        It received a map of used functions of the form {request_url: set(used_function_ids)}
        From this map, it generates a list of unused functions. Nested functions are removed from this list first, to enable easy elimination.
        functions in the using __remove_functions
        """
        unused_function_id_map = EliminationUtils.determine_unused_functions(self.function_id_map, used_function_id_map)
        for request_url in unused_function_id_map:
            start_end_list = EliminationUtils.convert_function_ids_to_start_end_list(unused_function_id_map[request_url])
            start_end_list = EliminationUtils.remove_nested_functions_from_start_end_list(start_end_list)
            self.__remove_functions(request_url, start_end_list)

    def __remove_functions(self, request_url: str, start_end_position_list: list):
        """This removes functions from a javascript file. It is a private function called from remove_unused_functions and strictly 
        assumes that EliminationUtils.remove_nested_functions_from_start_end_list has been called prior, 
        and therefore the start_end_position_list contains no nested functions.
        This function updates the data_map.

        Parameters:
        request_url: This is the url of the javascript file we want to remove functions from
        start_end_position_list: This is the list of the starting and ending positions of unused functions to remove.
        """
        script_content = self.data_map[request_url]["original"]
        offset = 0
        for start_end_position in start_end_position_list:
            [start_pos, end_pos] = start_end_position
            start_pos -= offset
            end_pos -= offset
            script_content = script_content[:start_pos+1] + script_content[end_pos:]
            offset += end_pos - start_pos - 1

        if not os.path.exists(f'ranges/{self.url.replace("/", "_")}/'):
            os.makedirs(f'ranges/{self.url.replace("/", "_")}/')

        #print (self.request_url_content_file_map[request_url])
        content_file_path = self.request_url_content_file_map[request_url]
        range_file_path = content_file_path.replace(".c", ".txt")

        with open(f'ranges/{self.url.replace("/", "_")}/{range_file_path}', 'w') as f:
            for start_end_position in start_end_position_list:
                [start_pos, end_pos] = start_end_position
                f.write(f"{start_pos},{end_pos}\n")

        self.data_map[request_url]["updated"] = script_content

    def persist_updated_files(self):
        """This saves the updated content to disk with the ".m" extension.
        """
        for request_url in self.data_map:
            content_file_path = self.request_url_content_file_map[request_url]
            update_file_path = content_file_path.split(".c")[0] + ".m"
            with open(self.cache_directory + "/" + "muzeel" + "/" + update_file_path, "w") as update_file:
                update_file.write(self.data_map[request_url]["updated"])

