#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& old){
	*this = old;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal capout" << std::endl;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "* WrongAnimal sounds *" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &right_op){
	type = right_op.type;
	return (*this);
}
