#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "⬆ in FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "⬆ in FragTrap" << std::endl;
    this->_health = 100;
    this->_energy = 100;
    this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "⬆ in FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "⬇ in FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five!" << std::endl;
}
