#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

//A class is made abstract by declaring at least one of its functions as pure virtual
//function. A pure virtual function is specified by placing "= 0" in its declaration
class Animal{
protected:
std::string	type;
public:
	Animal();
	Animal(const Animal& old);
	virtual ~Animal();
virtual void		makeSound(void) const = 0;// this is a pure virtual function, putting the function = 0
std::string			getType(void) const;
Animal				&operator=(const Animal &right_op);
};

#endif