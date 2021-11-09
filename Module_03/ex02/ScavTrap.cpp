#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string given_name): ClapTrap(given_name)
{
	this->hp = 100;
	this->energy_points = 50;
	this->ad = 20;
	std::cout << "Scav,constructor engaged!" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Scav,destructor engaged!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap" << this->name << "has enterred Gate keeper mode!" << std::endl;
}
