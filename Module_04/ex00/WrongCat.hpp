#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat& old);
	~WrongCat();
void	makeSound(void) const;
WrongCat		&operator=(const WrongCat &right_op);
};

#endif