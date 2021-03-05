#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>		// substr()
#include <limits>    	// numeric limits
#include <ctime>

class Zombie
{ 
	public:

	Zombie(std::string name ="Zomb", std::string type="Ghouls", std::string warcry="Braiiiiiiinnnssss ...")
		:m_name(name), m_type(type), m_warcry(warcry){}
	~Zombie();
	void		advert();

	private:

	std::string m_name;
	std::string m_type;
	std::string m_warcry;
};

#endif
