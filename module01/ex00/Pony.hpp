#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>     // std::cout, std::hex, std::endl
#include <string>		// substr()


class Pony
{ 
	public:

	Pony();
	Pony (std::string name, std::string action) : m_name(name), m_action(action) { };
	~Pony ();

	void	Action();
	void	Alive();

	private:

	std::string m_name;
	std::string m_action;
};

#endif