#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << "A dog created" << std::endl;
}

Dog::Dog(const Dog& old){
	*this = old;
	std::cout << "A dog created" << std::endl;
}

Dog::~Dog(){
	std::cout << "A dog is capout" << std::endl;
}

void	Dog::makeSound(void) const{
	std::cout << "* dog sounds *" << std::endl;
}

Dog	&Dog::operator=(const Dog &right_op){
	type = right_op.type;
	return (*this);
}
