#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		new_file;
	std::string		string_from_file;

	if (argc != 4)
	{
		std::cout << "You need to give 3 arguments!" << std::endl;
		return 1;
		// exit(EXIT_FAILURE);
	}
	infile.open(argv[1]);
	if (!(infile.is_open()))
	{
		std::cout << "Error opening file\n";
		return 1;
		// exit(EXIT_FAILURE);
	}

	new_file.append(argv[1]).append(".replace");
	outfile.open(new_file);
	if (!(outfile.is_open()))
	{
		infile.close();
		std::cout << "Error opening new file\n";

		// exit(EXIT_FAILURE);
		return 1;
	}
	//putting the file's content inside the string, string_from_file
	std::ostringstream buffer;
	buffer << infile.rdbuf();
	string_from_file = buffer.str();
	// std::cout << string_from_file << std::endl;
	
	//replacing s1 with s2
	size_t i;
	int	s1_length = ((std::string)argv[2]).length();
	i = string_from_file.find(argv[2], 0);
	//std::string::npos, means until the end of the string
	while (i != std::string::npos)
	{
		string_from_file.erase(i, s1_length);
		string_from_file.insert(i, argv[3]);
		i = string_from_file.find(argv[2], i);
	}
	outfile << string_from_file;
	outfile.close();
	infile.close();
	return 0;
}