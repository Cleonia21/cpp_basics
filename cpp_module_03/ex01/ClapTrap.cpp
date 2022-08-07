#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Deafault constructor colled" << std::endl;
	this->_health = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name constructor colled" << std::endl;
	this->_name = name;
	this->_health = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor colled" << std::endl;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_damage = copy._damage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	std::cout << "Assignement operator called" << std::endl;
	this->_name = assign._name;
	this->_health = assign._health;
	this->_energy = assign._energy;
	this->_damage = assign._damage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0)
	{
		std::cout	<< "ClapTrap " << this->_name << " attacks "
					<< target << ", causing " << this->_damage
					<< " points of damage!" << std::endl;
		this->_energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << this->_name << " louse "
				<< amount << " hit points" << std::endl;
	this->_health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		std::cout	<< "ClapTrap " << this->_name << " restored "
					<< amount << " hit points" << std::endl;
		this->_health += amount;
		this->_energy--;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "Destructor " << this->_name << " colled" << std::endl;
}
