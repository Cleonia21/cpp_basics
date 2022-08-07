#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap man("Boris");

    man.attack("Evgeniy");
    man.takeDamage(2);
    man.beRepaired(1);
}