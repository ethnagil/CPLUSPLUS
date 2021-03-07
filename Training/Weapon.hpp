#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>
 
class Weapon
{
    public:
 
    Weapon();
    Weapon(std::string type);
    void setType(std::string type);
    std::string getType();
 
    private:
 
    std::string *m_type;
};
 
#endif