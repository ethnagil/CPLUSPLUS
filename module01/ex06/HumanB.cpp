/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:17:56 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:18:01 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	HumanB::~HumanB(){
	}

    void	HumanB::setWeapon(Weapon &weapon)
    {
        this->m_weapon = &weapon;
    }

    void    HumanB::attack() {
        std::cout << this->m_name << " attacks with his " << this->m_weapon->getType() << '\n';
    }
