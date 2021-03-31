/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:00:51 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:01:39 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { 
	std::stringstream addr;
	size_t i = 0;

	addr << this;
	this->m_brain_addr = addr.str();
	while (i < m_brain_addr.length())	
	{
		if (isalpha(m_brain_addr[i]) && (m_brain_addr[i] != 'x'))
			m_brain_addr[i] = toupper(m_brain_addr[i]);
		i++;
	}
}
	
Brain::~Brain() { }

std::string	Brain::identifier() const
{
	return (this->m_brain_addr);
}
