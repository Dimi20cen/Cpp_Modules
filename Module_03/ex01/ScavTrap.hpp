#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap{
public :
	ScavTrap(std::string _name);
	~ScavTrap();
void	attack(std::string const &target);
void	guardGate(void);
};

#endif