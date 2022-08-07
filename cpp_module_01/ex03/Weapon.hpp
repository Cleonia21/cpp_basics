#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Weapon
{
	std::string type;
public:
	Weapon(std::string type);
	const std::string &getType();
	void setType(std::string new_type);
};

#endif