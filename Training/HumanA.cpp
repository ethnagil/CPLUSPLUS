#include "HumanA.hpp"

	HumanA::HumanA() {
	}

	HumanA::HumanA(std::string name, std::string weapon) {
	    this->m_name = name;
	    this->m_weapon = weapon;
	}

	HumanA::~HumanA(){
	}

    void HumanA::attack() {
        std::cout << this->m_name << " attacks with his " << this->m_weapon << '\n';
    }