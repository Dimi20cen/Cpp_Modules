#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& old);
	virtual	~WrongAnimal();
void	makeSound(void) const;
WrongAnimal		&operator=(const WrongAnimal &right_op);
};

#endif