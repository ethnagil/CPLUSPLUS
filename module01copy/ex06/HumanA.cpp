/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:17:24 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:17:27 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

	HumanA::~HumanA(){
	}

    void HumanA::attack() {
        std::cout << this->m_name << " attacks with his " << this->m_weapon.getType() << '\n';
    }
