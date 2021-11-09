#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# include <string>

class Zombie{
	private:
		std::string name;
	public:
		void give_name(std::string Z_name);
		void announce(void);
		~Zombie(void);
};

Zombie*	newZombie(std::string Z_name);
void	randomChump(std::string Z_name);

Zombie* zombieHorde(int N, std::string name);

#endif