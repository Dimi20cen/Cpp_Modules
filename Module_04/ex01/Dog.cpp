#include "Dog.hpp"

Dog::Dog(){
	std::cout << "A dog created" << std::endl;
	type = "Dog";
	dog_brain = new Brain();
}

Dog::Dog(const Dog& old){
	*this = old;
	std::cout << "A dog created" << std::endl;
}

Dog::~Dog(){
	delete dog_brain;
	std::cout << "A dog is capout" << std::endl;
}

void	Dog::makeSound(void) const{
	std::cout << "* dog sounds *" << std::endl;
}

Dog	&Dog::operator=(const Dog &right_op){
	type = right_op.type;
	dog_brain = new Brain(*right_op.dog_brain);
	return (*this);
}
