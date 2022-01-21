#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
protected:
std::string	type;
public:
	Animal();
	Animal(const Animal& old);
	virtual	~Animal();
virtual void		makeSound(void) const;
std::string			getType(void) const;
Animal				&operator=(const Animal &right_op);
};

#endif