#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif