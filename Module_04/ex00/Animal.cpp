#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal erased" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "*generic animal noises*" << std::endl;
} 

std::string Animal::getType() const
{
	return this->type;
}