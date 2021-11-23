#include "convert.hpp"

bool weird_type(std::string str)
{
	if (!str.compare("-inff") || !str.compare("inff") || !str.compare("nanf")
		|| !str.compare("-inf") || !str.compare("inf") || !str.compare("nan"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::string for_float[3] = {"-inff", "inff", "nanf"};
		std::string for_double[3] = {"-inf", "inf", "nan"};
		for (int i = 0; i < 3; i++)
		{
			if (str.compare(for_float[i]) == 0 || str.compare(for_double[i]) == 0)
			{
				std::cout << "float: " << for_float[i] << std::endl;
				std::cout << "double: " << for_double[i] << std::endl;
			}
		}
		return 1;
	}
	return 0;
} 

bool is_okay(std::string str)
{
	int i = 0;
	bool found_dec_point = 0;
	bool found_minus = 0;

	if ((str[i] >= 32 && str[i] <= 127) && (str[i] < '0' || str[i] > '9') && str[i+1] == '\0')
		return 1;
	if (str[i] == '-')
	{
		found_minus = 1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '.')
	{
		if (str[i] == '.' && i > 0 + found_minus)
		{
			if (found_dec_point == 1)
				return 0;
			else
				found_dec_point = 1;
		}
		else if (str[i] == '.')
			return 0;
		i++;
	}
	if (found_dec_point == 1 && str[i] == 'f' && str[i + 1] == '\0')
		return 1;
	if (str[i] == '\0')
		return 1;
	else
		return 0;
}

void converting(double x)
{
	char	c = static_cast<char>(static_cast<int>(x));

	if (!isprint(static_cast<int>(x)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << '\''<< c << '\''<<  std::endl;
	std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << x << 'f' << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << x << std::endl;

}

bool is_char(char c)
{
	if ((c >= 32 && c <= 127) && (c < '0' || c > '9'))
	{
		double	x = static_cast<double>(c);

		std::cout << "char: '" << c << '\'' <<  std::endl; 
		std::cout << "int: " << static_cast<int>(x) <<  std::endl; 
		std::cout << std::fixed << std::setprecision(1) << "float: " << x << 'f' << std::endl; 
		std::cout << std::fixed << std::setprecision(1) << "double: " << x <<  std::endl; 
		return 1;
	}
	return 0;		
}

// in the subject it game 0, nan, 42.0f
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Needs one thing as argument, no more no less!" << std::endl;
		return (1);
	}
	if (weird_type(argv[1]) == 1)
	{
		return 0;
	}
	bool is_ok = is_okay(argv[1]);
	if (is_ok)
	{
		if (argv[1][1] == '\0' && is_char(argv[1][0]))
		{
			return 0;
		}
		else
			converting(std::stod(argv[1]));
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	return (0);
}
