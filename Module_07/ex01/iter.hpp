#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	increaseTab(T &x){
	x++;
}
template<typename T>
void	printTab(T &x){
	std::cout << x << std::endl;
}

template <typename T>
void iter(T *address, int len, void (*func)(T &elem))
{
	int i = 0;

	while (i < len)
	{
		func(address[i]);
		i++;
	}
}

#endif