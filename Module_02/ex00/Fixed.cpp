#include "Fixed.hpp"

Fixed::Fixed(void) : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy){
	std::cout << "Copy constructor called" << std::endl;
	this->value = toCopy.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator = (const Fixed &toCopyFrom){
	std::cout << "Assignation operator called" << std::endl;
	this->value = toCopyFrom.getRawBits();
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw ){
	this->value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
