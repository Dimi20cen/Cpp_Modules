#include "HumanA.hpp"

HumanA::HumanA(std::string given_name, Weapon &type) : weapon(type)
{
	name = given_name;
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.type << std::endl;
}
