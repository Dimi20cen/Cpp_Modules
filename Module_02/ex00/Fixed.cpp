#include "Fixed.hpp"

Fixed::Fixed(void) : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy){
	this->value = toCopy.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator = (const Fixed &toCopyFrom){
	this->value = toCopyFrom.value;
	std::cout << "Assignation operator called" << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw ){
	this->value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
