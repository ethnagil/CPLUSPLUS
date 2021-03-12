/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:17:46 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:17:49 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANB
#define DEF_HUMANB

#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:

	HumanB();
	HumanB(std::string name) : m_name(name) { };
	~HumanB();
	void	setWeapon(Weapon weapon);
    void 	attack();

    private:

    std::string m_name;
	Weapon*	m_weapon;
};

#endif
