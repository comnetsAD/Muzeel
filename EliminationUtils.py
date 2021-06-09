class EliminationUtils:
    @staticmethod
    def determine_unused_functions(complete_function_id_map: dict, used_function_id_map: dict) -> dict:
        unused_function_id_map = {}
        for request_url in complete_function_id_map:
            unused_function_id_map[request_url] = complete_function_id_map[request_url].difference(used_function_id_map.get(request_url, set()))
        return unused_function_id_map

    @staticmethod
    def convert_function_ids_to_start_end_list(function_id_set: set):
        start_end_list = []
        for function_id in function_id_set:
            try:
                [function_id, start_pos, end_pos] = function_id.split(" | ")
                start_end_list.append([int(start_pos), int(end_pos)])
            except:
                pass
        return start_end_list

    @staticmethod
    def remove_nested_functions_from_start_end_list(start_end_list: list):
        start_end_list.sort()
        return_list = []
        len_start_end_list = len(start_end_list)

        i = 0
        while i < len_start_end_list:
            return_list.append(start_end_list[i])
            j = i + 1
            while j < len_start_end_list and start_end_list[j][1] < start_end_list[i][1]:
                j += 1
            i = j

        return return_list
