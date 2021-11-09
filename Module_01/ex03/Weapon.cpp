#include "Weapon.hpp"

Weapon::Weapon(std::string given_type)
{
	type = given_type;
}

void	Weapon::setType(std::string given_type)
{
	type = given_type;
}

std::string const &Weapon::getType(void)
{
	return type;
}