#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack(void)
{
	std::cout   << name << " attacks with their "
				<< this->weapon->getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
