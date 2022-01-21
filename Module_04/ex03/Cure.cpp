#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){

}

Cure::Cure(const Cure& old) : AMateria("cure"){
	*this = old;
}

Cure::~Cure(){

}

Cure*	Cure::clone() const{
	Cure*	clone = new Cure();

	return (clone);
}

Cure	&Cure::operator=(const Cure &rhs){
	_type = rhs._type;
	return (*this);
}