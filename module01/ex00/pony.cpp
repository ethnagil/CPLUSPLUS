/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:27:56 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:27:58 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony ()
{
	m_name = "Newpony";
	m_action = "Sleeping";
}

Pony::~Pony () {std::cout << m_name << " \e[91;4mdied\e[0m" <<std::endl;}

void	Pony::Alive()
{
	std::cout << this->m_name << " is still alive!" << '\n';
}

void	Pony::Action()
{
	std::cout << "This pony " << this->m_name << " is " << this->m_action << '\n';
}
 
