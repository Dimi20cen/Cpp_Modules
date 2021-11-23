#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << "A cat just created" << std::endl;
}

Cat::Cat(const Cat& old){
	*this = old;
	std::cout << "A cat just created" << std::endl;
}

Cat::~Cat(){
	std::cout << "A cat is cappout" << std::endl;
}

void	Cat::makeSound(void) const{
	std::cout << "* cat sounds *" << std::endl;
}

Cat	&Cat::operator=(const Cat &right_op){
	type = right_op.type;
	return (*this);
}
