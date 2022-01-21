#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "Default";
}

AMateria::AMateria(std::string const & type){
	_type = type;
}

AMateria::AMateria(const AMateria& old){
	_type = old._type;
}

AMateria::~AMateria(){

}

void	AMateria::use(ICharacter& target){
	if (_type == "cure")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (_type == "ice")
		std::cout << "* heals " << target.getName() << " 's wounds *" << std::endl;
}

std::string const	&AMateria::getType() const{
	return (_type);
}

AMateria	&AMateria::operator=(const AMateria &rhs){
	_type = rhs._type;
	return (*this);
}