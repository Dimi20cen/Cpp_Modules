#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string Z_name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].give_name(Z_name);
	}
	return horde;
}