#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "⬆ in ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "⬆ in ScavTrap" << std::endl;
    this->_health = 100;
    this->_energy = 50;
    this->_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "⬆ in ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "⬇ in ScavTrap" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy > 0)
	{
		std::cout	<< "ScavTrap " << this->_name << " attacks "
					<< target << ", causing " << this->_damage
					<< " points of damage!" << std::endl;
		this->_energy--;
	}
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
