#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void){
	FragTrap	FragTrap("Conor");

	FragTrap.highFivesGuys();
	FragTrap.attack("DDD");
	FragTrap.takeDamage(3);
	FragTrap.takeDamage(42);

	return (0);
}