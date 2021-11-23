#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	dog_brain = new Brain();
	std::cout << "A dog created" << std::endl;
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
