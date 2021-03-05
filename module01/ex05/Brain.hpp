#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>		// substr()
#include <limits>    	// numeric limits
#include <sstream>
#include <ctime>

class Brain
{ 
	public:

	Brain();
	~Brain();
	std::string	identifier() const;

	private:

	std::string m_brain_addr;
};

#endif
