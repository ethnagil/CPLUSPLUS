/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:14:31 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:14:34 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){ }

Human::~Human() { 
	std::cout << "\n Sadly the human has died \n";
}

Brain const &Human::getBrain() {
	return (this->m_brain);
}

std::string		Human::identifier()
{
	return this->m_brain.identifier(); 
}
