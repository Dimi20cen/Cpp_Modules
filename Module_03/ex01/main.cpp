#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap ClapTrapper("Sura");
	ScavTrap ScavTrapper("Warrior");

	ClapTrapper.attack("wolves");	
	ScavTrapper.takeDamage(5);
	ScavTrapper.beRepaired(3);

	ScavTrapper.guardGate();
}
