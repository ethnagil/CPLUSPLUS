#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>		// substr()
#include <limits>    	// numeric limits
#include "Brain.hpp"

class Human
{ 
	public:

	Human();
	~Human();
	Brain const getBrain();
	std::string	identifier();

	private:

	Brain const m_brain;
};

#endif
