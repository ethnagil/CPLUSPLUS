/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:56:48 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:56:50 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
	void		setName(std::string name);
	void		announce(std::string msg);

	private:

	std::string m_name;
	std::string m_type;
	std::string m_warcry;
};

#endif
