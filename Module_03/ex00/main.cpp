#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Trapper1("Sura");
	ClapTrap Trapper2("Warrior");

	Trapper1.attack("wolves");	
	Trapper2.takeDamage(5);
	Trapper2.beRepaired(3);
}