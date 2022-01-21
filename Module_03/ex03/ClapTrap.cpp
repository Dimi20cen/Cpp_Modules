#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	Name = name;
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "ClapTrap " << Name << " has arrived!" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << Name << " got destructed!" << std::endl;
}

void	ClapTrap::attack(std::string const &target){
	if (Hitpoints > 0)
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (Hitpoints > 0){
		Hitpoints -= amount;
		std::cout << "ClapTrap " << Name << " takes " << amount << " damage points!" << std::endl;
	}
	if (Hitpoints < 0)
		Hitpoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (Hitpoints > 0){
		Hitpoints += amount;
		std::cout << "ClapTrap " << Name << " recovers " << amount << " Energy points!" << std::endl;
	}
}