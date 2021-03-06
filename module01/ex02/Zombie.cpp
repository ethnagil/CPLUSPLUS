/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:30:23 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:30:26 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

	#include "Zombie.hpp"

	Zombie::~Zombie() { std::cout << m_name << " \e[91;4mdied\e[0m" <<std::endl;}

	void		Zombie::advert()
	{
		std::cout << "<" <<this->m_name<<" ("<<this->m_type<<")> "<<this->m_warcry<<'\n'; 
	}
