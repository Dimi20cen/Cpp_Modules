#include "Zombie.hpp"

//constructor
Zombie::Zombie(std::string Z_name)
{
	name = Z_name;
}

//destructor
Zombie::~Zombie(void)
{
	std::cout << this->name << " is capout!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
