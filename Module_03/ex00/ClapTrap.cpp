#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string given_name)
{
	name = given_name;
	hp = 10;
	energy_points = 10;
	ad = 0;
	std::cout << "constructor engaged!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor engaged!" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target
	 << ",causing " << this->ad << " points of damage!" << std::endl;
	this->energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " damaged for this amount of hp, " 
	 << amount << "!" <<std::endl;
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name 
	 << " healed for this amount of hp, " << amount << "!" << std::endl;
	this->hp -= amount;
}
