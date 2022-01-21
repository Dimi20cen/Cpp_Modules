#include "Zombie.hpp"

Zombie	*newZombie(std::string Z_name)
{
	Zombie *heap_Zombie = new Zombie(Z_name);

	return heap_Zombie;
}
