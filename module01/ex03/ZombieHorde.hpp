#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>		// substr()
#include <limits>    	// numeric limits
#include "Zombie.hpp"

class ZombieHorde
{ 
	public:

	ZombieHorde(int n);
	~ZombieHorde();
	Zombie * 	newZombie(std::string	name);
	void		setZombieType(std::string type);
	std::string	randomChump();
	void		announce();
	
	private:

	Zombie *	m_critter;
	int			m_n;
	std::string m_lastname;
};

#endif