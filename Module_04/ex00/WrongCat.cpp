#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& old){
	type = old.type;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat capout" << std::endl;
}

void	WrongCat::makeSound(void) const{
	std::cout << "* WrongCat sounds *" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &right_op){
	type = right_op.type;
	return (*this);
}
