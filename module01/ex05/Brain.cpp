	#include "Brain.hpp"

	Brain::Brain() { 
		std::stringstream addr;

		addr << this;
		this->m_brain_addr = addr.str();
	}
	
	Brain::~Brain() { }

	std::string	Brain::identifier() const
	{
		return (this->m_brain_addr);
	}