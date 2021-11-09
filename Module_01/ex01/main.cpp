#include "Zombie.hpp"

int main(void)
{
	int			N = 3;
	std::string	name = "zombieeee";

	if (N > 0)
	{
		Zombie *horde = zombieHorde(N, name);
		for (int i = 0; i < N; i++)
			horde[i].announce();

		delete [] horde;
	}
	return 0;
}
