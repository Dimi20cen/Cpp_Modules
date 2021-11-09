#include "FragTrap.hpp"

FragTrap::FragTrap(std::string given_name): ClapTrap(given_name)
{
	this->hp = 100;
	this->energy_points = 100;
	this->ad = 30;
	std::cout << "Frag,constructor engaged!" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "Frag,destructor engaged!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FlagTrapper " << this->name << " said, high five me NOWW!!" << std::endl;
}
