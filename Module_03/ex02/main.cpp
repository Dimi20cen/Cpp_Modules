#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap ClapTrapper("Sura");
	FragTrap FragTrapper("Fragger");

	FragTrapper.attack("wolves");	
	FragTrapper.takeDamage(5);
	FragTrapper.beRepaired(3);

	FragTrapper.highFivesGuys();
}
