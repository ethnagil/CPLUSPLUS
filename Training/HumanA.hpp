#ifndef DEF_HUMANA
#define DEF_HUMANA

#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:

	HumanA();
	HumanA(std::string name, std::string weapon);
	~HumanA();
    void attack();

    private:

    std::string m_name;
	Weapon      m_weapon;
};

#endif