#include "Cat.hpp"

Cat::Cat(){
	std::cout << "A cat just created" << std::endl;
	cat_brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat& old){
	std::cout << "A cat just created" << std::endl;
	*this = old;
}

Cat::~Cat(){
	delete cat_brain;
	std::cout << "A cat is cappout" << std::endl;
}

void	Cat::makeSound(void) const{
	std::cout << "* cat sounds *" << std::endl;
}

Cat	&Cat::operator=(const Cat &right_op){
	type = right_op.type;
	cat_brain = new Brain(*right_op.cat_brain);
	return (*this);
}
