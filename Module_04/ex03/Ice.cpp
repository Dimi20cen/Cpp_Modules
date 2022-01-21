#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){

}

Ice::Ice(const Ice& old) : AMateria("ice"){
	*this = old;
}

Ice::~Ice(){

}

Ice*	Ice::clone() const{
	Ice *clone = new Ice();

	return (clone);
}

Ice	&Ice::operator=(const Ice &rhs){
	_type = rhs._type;
	return (*this);
}