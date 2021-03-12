/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:17:35 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:17:38 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANA
#define DEF_HUMANA

#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:

	HumanA();
	HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon) { };
	~HumanA();
    void attack();

    private:

    std::string m_name;
	Weapon&	m_weapon;
};

#endif
