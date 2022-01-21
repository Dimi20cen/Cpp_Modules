#include "Zombie.hpp"

void	randomChump(std::string Z_name)
{
	Zombie	stackZombie(Z_name);
	stackZombie.announce();
}
