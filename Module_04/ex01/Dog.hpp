#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal{
private:
	Brain *dog_brain;
public :
	Dog();
	Dog(const Dog& old);
	~Dog();
virtual void	makeSound(void) const;
Dog		&operator=(const Dog &right_op);
};

#endif