/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:56:38 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:56:40 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

	#include "Zombie.hpp"

	Zombie::~Zombie() {std::cout << m_name << " \e[91;4mdied\e[0m" <<std::endl;}

	void		Zombie::setName(std::string name)
	{
		this->m_name = name;
		this->m_type = "HORDE";
	}
	void		Zombie::announce(std::string msg)
	{
		std::cout << msg << " : " <<this->m_name<<" ("<<this->m_type<<")> "<< this->m_warcry<<'\n'; 
	}
