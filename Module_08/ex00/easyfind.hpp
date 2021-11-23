#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

template<typename T>
void easyfind(T container, int instance)
{
	typename T::iterator i;
	for (i = container.begin(); i < container.end(); i++)
	{
		if (instance == *i)
		{
			std::cout << "Found the instance!" << std::endl;
			return ;
		}
	}
	throw std::exception();
}
#endif