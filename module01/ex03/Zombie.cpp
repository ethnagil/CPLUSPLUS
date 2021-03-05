	#include "Zombie.hpp"

	Zombie::~Zombie() { }

	void		Zombie::setName(std::string name)
	{
		this->m_name = name;
		this->m_type = "HORDE";
	}
	void		Zombie::announce(std::string msg)
	{
		std::cout << msg << " : " <<this->m_name<<" ("<<this->m_type<<")> "<< this->m_warcry<<'\n'; 
	}