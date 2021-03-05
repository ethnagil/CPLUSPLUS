#include "Pony.hpp"

Pony::Pony ()
{
	m_name = "Newpony";
	m_action = "Sleeping";
}

Pony::~Pony (){ }

void	Pony::Alive()
{
	std::cout << this->m_name << " is still alive!" << '\n';
}

void	Pony::Action()
{
	std::cout << "This pony " << this->m_name << " is " << this->m_action << '\n';
}
 