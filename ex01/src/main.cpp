
#include "ZombieHorde.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie *horde = zombieHorde(42, "Zombie");
	for (int i = 0; i < 42; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}