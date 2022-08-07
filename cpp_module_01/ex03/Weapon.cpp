#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType()
{
	const std::string &ptr = this->type;
	return (ptr);
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
