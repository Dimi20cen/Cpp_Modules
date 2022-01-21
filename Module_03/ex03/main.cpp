#include "DiamondTrap.hpp"

int	main(void){
	DiamondTrap DiamondTrap("Bing");

	DiamondTrap.whoAmI();
	DiamondTrap.attack("Bong");
	DiamondTrap.attack("Bong");
	DiamondTrap.takeDamage(42);
	DiamondTrap.highFivesGuys();

	return (0);
}