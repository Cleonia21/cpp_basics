#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon *weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif