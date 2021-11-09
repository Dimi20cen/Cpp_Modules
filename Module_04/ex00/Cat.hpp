#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	void makeSound() const;
};

Cat::Cat()
{
	type = "cat";
	std::cout << "Animal created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Animal erased" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "*cat sounds*" << std::endl;
}


#endif