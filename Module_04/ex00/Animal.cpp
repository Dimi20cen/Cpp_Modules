#include "Animal.hpp"

Animal::Animal(){
	std::cout << "An animal created" << std::endl;
}

Animal::Animal(const Animal& old){
	*this = old;
	std::cout << "An animal created" << std::endl;
}

Animal::~Animal(){
	std::cout << "An animal capout" << std::endl;
}

void	Animal::makeSound(void) const{
	std::cout << "* animal sounds *" << std::endl;
}

std::string	Animal::getType(void) const{
	return (type);
}

Animal	&Animal::operator=(const Animal &right_op){
	type = right_op.type;
	return (*this);
}
