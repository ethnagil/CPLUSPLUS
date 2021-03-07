#include <iostream>
#include "HumanA.hpp"

int main()
{
    Weapon club("crude spiked club");
    HumanA Bob("Bob", club);

    Bob.HumanA::attack();
    club.Weapon::setType("baseball bat");
    Bob.HumanA::attack();

    return 0;
}