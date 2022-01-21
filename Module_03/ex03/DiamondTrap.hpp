#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap{
private :
std::string Name;
public :
	DiamondTrap(std::string _name);
	~DiamondTrap(void);
	using ScavTrap::attack;
	void	whoAmI(void);
};

#endif