#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string 	name;
	unsigned int	hp;
	unsigned int	energy_points;
	unsigned int	ad;	
public:
	ClapTrap(std::string given_name);
	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif