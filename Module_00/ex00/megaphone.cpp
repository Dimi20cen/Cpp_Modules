#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	size_t j = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		j = 0;
		std::string str(argv[i]);
		while (j < str.length())
		{
			std::cout << (char)std::toupper(str[j]);
			j++;
		}
	}
	std::cout << std::endl;
    return 0;
}
