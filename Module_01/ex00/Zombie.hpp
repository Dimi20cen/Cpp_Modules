#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# include <string>

class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		~Zombie(void);
		Zombie(std::string Z_name);
};

Zombie*	newZombie(std::string Z_name);
void	randomChump(std::string Z_name);

#endif