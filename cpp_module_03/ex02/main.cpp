#include "FragTrap.hpp"

int main(void)
{
    FragTrap manA("Boris");
    FragTrap manB(manA);
    FragTrap manC;

    manC = manB;

    manA.attack("Evgeniy");
    manB.takeDamage(2);
    manC.beRepaired(1);
    manC.highFivesGuys();
}
