#include "Zombie.hpp"

//destructor
Zombie::~Zombie(void)
{
	std::cout << this->name << " is capout!" << std::endl;
}

void Zombie::give_name(std::string Z_name)
{
	name = Z_name;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

