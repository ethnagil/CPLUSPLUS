#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>		// substr()
#include <limits>    	// numeric limits
#include "Zombie.hpp"

class ZombieEvent
{ 
	public:

	ZombieEvent();
	~ZombieEvent();
	Zombie * newZombie(std::string	name);
	void	setZombieType(std::string type);
	void	randomChump();
	void	announce(Zombie *name);
	
	private:

	std::string m_type;
	std::string m_eventcry;
};

#endif