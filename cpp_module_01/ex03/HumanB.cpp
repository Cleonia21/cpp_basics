#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon)
		std::cout << this->weapon->getType();
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon; 
}
