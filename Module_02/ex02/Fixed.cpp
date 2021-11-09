#include "Fixed.hpp"

Fixed::Fixed(void) : value(0){}
Fixed::Fixed(const int param){
	this->value = param << this->n_of_fracBits;
}
Fixed::Fixed(const float param){
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
}
Fixed::~Fixed(void){}

void Fixed::operator = (const Fixed &toCopyFrom){
	this->value = toCopyFrom.value;
	std::cout << "Assignation operator called" << std::endl;
}
std::ostream &operator << (std::ostream &output, const Fixed &obj){
	output << obj.toFloat();
	return output;
}

bool Fixed::operator == (const Fixed &obj) const{
	return (value == obj.value);
}
bool Fixed::operator <= (const Fixed &obj) const{
	return (value <= obj.value);
}
bool Fixed::operator >= (const Fixed &obj) const{
	return (value >= obj.value);
}
bool Fixed::operator < (const Fixed &obj) const{
	return (value < obj.value);
}
bool Fixed::operator > (const Fixed &obj) const{
	return (value > obj.value);
}
bool Fixed::operator != (const Fixed &obj) const{
	return (value != obj.value);
}

Fixed Fixed::operator + (const Fixed &obj)
{
	Fixed new_obj;
	new_obj.value = value + obj.value;
	return (new_obj);
}
Fixed Fixed::operator - (const Fixed &obj)
{
	Fixed new_obj;
	new_obj.value = value - obj.value;
	return (new_obj);
}
Fixed Fixed::operator * (const Fixed &obj)
{
	value = roundf(toFloat() * obj.toFloat() * (1 << n_of_fracBits));
	return (*this);
}
Fixed Fixed::operator / (const Fixed &obj)
{
	value = roundf(toFloat() / obj.toFloat() * (1 << n_of_fracBits));
	return (*this);
}

Fixed& Fixed::operator ++ ()
{
  // implement increment logic on this instance, return reference to it.
  value++;
  return *this;
}
// postfix
Fixed Fixed::operator ++ (int)
{
  Fixed tmp(*this);
  operator ++ (); // prefix-increment this instance
  return tmp;   // return value before increment
}
Fixed& Fixed::operator -- ()
{
  // implement increment logic on this instance, return reference to it.
  value--;
  return *this;
}
// postfix
Fixed Fixed::operator -- (int)
{
  Fixed tmp(*this);
  operator -- (); // prefix-increment this instance
  return tmp;   // return value before increment
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return num2;
	return num1;
}
Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return num2;
	return num1;
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1 > num2)
		return num2;
	return num1;
}
const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1 < num2)
		return num2;
	return num1;
}