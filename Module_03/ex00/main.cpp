#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	ClapTrap("George");

	ClapTrap.attack("Canelos");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(2);
	ClapTrap.attack("Canelos");
	ClapTrap.takeDamage(5);
	ClapTrap.attack("Canelos");
	return (0);
}
