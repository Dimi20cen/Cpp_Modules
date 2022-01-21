#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name) {
	
	hp = 10;
	EnergyPoints = 50;
	ad = 20;
	std::cout << "ScavTrap " << Name << " has arrived!" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << Name << " got destructed!" << std::endl;
}
void		ScavTrap::attack(std::string const &target){
	if (hp > 0)
		std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << ad << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap has enterred Gate keeper mode!" << std::endl;
}
