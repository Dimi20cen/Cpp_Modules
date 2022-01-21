#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen Karen;
	int level = 6;

	if (argc == 2)
	{
		if ((std::string)argv[1] == "DEBUG")
			level = 1;
		else if ((std::string)argv[1] == "INFO")
			level = 2;
		else if ((std::string)argv[1] == "WARNING")
			level = 3;
		else if ((std::string)argv[1] == "ERROR")
			level = 4;
		else
			level = 0;
//------------------------------------------------------------
		switch (level)
		{
		case 1:
			std::cout << "[ " << "DEBUG" << " ]" << std::endl;
			Karen.complain("DEBUG");
		case 2:
			std::cout << "[ " << "INFO" << " ]" << std::endl;
			Karen.complain("INFO");
		case 3:
			std::cout << "[ " << "WARNING" << " ]" << std::endl;
			Karen.complain("WARNING");
		case 4:
			std::cout << "[ " << "ERROR" << " ]" << std::endl;
			Karen.complain("ERROR");
			break;
		default:
			std::cout << "[ !!!STOP COMPLAING!!! ]" << std::endl;
			break;
		}
	}
	else
		std::cout << "Program accepts one argument!" << std::endl;
	return 0;
}
