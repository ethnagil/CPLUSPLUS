#include "Weapon.hpp"

Weapon() {
}

Weapon(std::string type) : m_type(type) {
}

void setType(std::string type) {
    this->m_type = type;
}

std::string& getType() {
    return (this->m_type);
}