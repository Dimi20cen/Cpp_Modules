#include "HumanB.hpp"

HumanB::HumanB(std::string given_name)
{
	name = given_name;
	weapon = NULL;
}

void HumanB::setWeapon(Weapon &given_weapon)
{
	weapon = &given_weapon;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->type << std::endl;
}
