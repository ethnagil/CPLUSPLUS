	#include "Zombie.hpp"

	Zombie::~Zombie() { }

	void		Zombie::advert()
	{
		std::cout << "<" <<this->m_name<<" ("<<this->m_type<<")> "<<this->m_warcry<<'\n'; 
	}