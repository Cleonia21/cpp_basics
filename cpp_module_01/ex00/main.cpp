#include "Zombie.hpp"

int main(void)
{
	Zombie *new_zombie;

	new_zombie = newZombie("42");
	randomChump("21");
	new_zombie->announce();
	delete new_zombie;
	return (0);
}