class DOTFileBuilder:
    def __init__(self, output_directory: str) -> None:
        self.file_string = "digraph eventGraph {\n"
        self.output_directory: str = output_directory

    def add_node(self, dot_representation: str) -> None:
        self.file_string += dot_representation + "\n"

    def close(self) -> None:
        self.file_string += "}"
        output_file = open(self.output_directory + "/output.dot", "w")
        output_file.write(self.file_string)
        output_file.close()
