#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	Name = name;
	hp = 10;
	EnergyPoints = 10;
	ad = 0;
	std::cout << "ClapTrap " << Name << " has arrived!" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << Name << " got destructed!" << std::endl;
}

void	ClapTrap::attack(std::string const &target){
	if (hp > 0)
		std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << ad << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hp > 0){
		hp -= amount;
		std::cout << "ClapTrap " << Name << " take " << amount << " damage points!" << std::endl;
	}
	if (hp < 0)
		hp = 0;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (hp > 0){
		hp += amount;
		std::cout << "ClapTrap " << Name << " recovers " << amount << " Energy points!" << std::endl;
	}
}