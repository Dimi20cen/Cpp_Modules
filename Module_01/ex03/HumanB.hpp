#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public:
		std::string	name;
		//i use pointer and not reference because, References cannot have a null value assigned but pointer can.
		Weapon		*weapon;

		void attack(void);
		HumanB(std::string	name);
		void setWeapon(Weapon &given_weapon);
};

#endif