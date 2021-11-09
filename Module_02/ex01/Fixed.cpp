#include "Fixed.hpp"

Fixed::Fixed(void) : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param){
	std::cout << "Int constructor called" << std::endl;	
	this->value = param << this->n_of_fracBits;
}

Fixed::Fixed(const float param){
	std::cout << "Float constructor called" << std::endl;	
	this->value = (int)(roundf(param * (1 << this->n_of_fracBits)));
}

float Fixed::toFloat( void ) const{
	return ((float)this->value / (float)(1 << this->n_of_fracBits));	
}

int Fixed::toInt ( void ) const{
	return((int)(this->value >> this->n_of_fracBits));
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

std::ostream &operator << (std::ostream &output, const Fixed &obj){
	output << obj.toFloat();
	return output;
}
