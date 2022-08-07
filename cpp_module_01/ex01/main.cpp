#include "Zombie.hpp"

int main(void)
{
	int N = 10;

	Zombie *zombies = zombieHorde(N, "ex01");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}