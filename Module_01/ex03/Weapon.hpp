#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "iostream"

class Weapon{
	public:
		std::string type;
	
		void setType(std::string given_type);
		std::string const &getType();
	
		Weapon(std::string given_type);
};

#endif