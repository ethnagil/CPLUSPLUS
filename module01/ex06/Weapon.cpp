/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:18:32 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:18:35 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type) {
}

void Weapon::setType(std::string typenew) {
    this->m_type = typenew;
}

std::string& Weapon::getType() {
    return (this->m_type);
}
