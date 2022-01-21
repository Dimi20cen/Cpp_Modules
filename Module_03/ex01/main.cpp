#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int	main(void){
	ScavTrap ScavTrap("GGG");
	// ClapTrap	ClapTrap("George");

	// ClapTrap.attack("Canelos");
	// ClapTrap.takeDamage(5);
	// ClapTrap.beRepaired(2);
	// ClapTrap.attack("Canelos");
	// ClapTrap.takeDamage(5);
	// ClapTrap.attack("Canelos");

	ScavTrap.attack("Floyd");
	ScavTrap.takeDamage(5);
	ScavTrap.attack("Floyd");
	ScavTrap.beRepaired(2);
	ScavTrap.guardGate();
	
	return (0);
}