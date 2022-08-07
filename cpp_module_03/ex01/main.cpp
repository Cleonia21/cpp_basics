#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap manA("Boris");
    ScavTrap manB(manA);
    ScavTrap manC;

    manC = manB;

    manA.attack("Evgeniy");
    manB.takeDamage(2);
    manC.beRepaired(1);
    manC.guardGate();
}
