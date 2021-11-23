#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal{
public :
	Dog();
	Dog(const Dog& old);
	~Dog();
virtual void	makeSound(void) const;
Dog		&operator=(const Dog &right_op);
};

#endif