#include "Karen.hpp"

Karen::Karen(void)
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	pointer_to_funcs[0] = &Karen::debug;
	pointer_to_funcs[1] = &Karen::info;
	pointer_to_funcs[2] = &Karen::warning;
	pointer_to_funcs[3] = &Karen::error;
}

void Karen::complain(std::string level)
{
	int i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*pointer_to_funcs[i])();
			return ;
		}
		i++;
	}
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
