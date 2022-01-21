#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
protected:
	T				*Data;
	unsigned int	tab_size;
public:
	Array() : Data(new T[0]), tab_size(0) {};
	Array(unsigned int n) : Data(new T[n]), tab_size(n) {}
	Array(const Array& copy) : Data(new T[copy.tab_size]), tab_size(copy.tab_size){
		for (unsigned int i = 0; i < tab_size; i++)
			Data[i] = copy.Data[i];
	}
	~Array()
	{
		delete[] Data;
	}

	Array	&operator = (const Array &right_op)
	{
		delete [] Data;
		tab_size = right_op.tab_size;
		Data = new T[right_op.tab_size];
		for (unsigned int i = 0; i < tab_size; i++)
			Data[i] = right_op.Data[i];
		return (*this);
	}

	T	&operator [] (unsigned int give_i)
	{
		if (give_i >= tab_size)
			throw std::exception();
		else
			return Data[give_i];
	}

	unsigned int size(void) const
	{
		return tab_size;
	}
};

#endif
