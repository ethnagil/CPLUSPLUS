/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:07 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:48 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

// Constructor and Destructor
SuperTrap::SuperTrap( void ): ClapTrap(), FragTrap(), NinjaTrap()
{
	m_name = "SuperTrap";
	m_hitpoints = FragTrap::m_hitpoints;
	m_max_hitpoints = FragTrap::m_max_hitpoints;
	m_energypoints = NinjaTrap::m_energypoints;
	m_max_energypoints = NinjaTrap::m_max_energypoints;
	m_melee_damage = NinjaTrap::m_melee_damage;
	m_ranged_damage	 = FragTrap::m_ranged_damage;
	m_armor_damage_red = FragTrap::m_armor_damage_red;	
	std::cout << "CP0G-TP: Superping up Robot : " << this->m_name << std::endl;
}

SuperTrap::SuperTrap( std::string name ): ClapTrap(name), FragTrap(name), NinjaTrap("Super", name)
{
	m_name = name;
	m_hitpoints = FragTrap::m_hitpoints;
	m_max_hitpoints = FragTrap::m_max_hitpoints;
	m_energypoints = NinjaTrap::m_energypoints;
	m_max_energypoints = NinjaTrap::m_max_energypoints;
	m_melee_damage = NinjaTrap::m_melee_damage;
	m_ranged_damage	 = FragTrap::m_ranged_damage;
	m_armor_damage_red = FragTrap::m_armor_damage_red;
	std::cout << "CP0G-TP: Superping up Robot : " << this->m_name << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &rhs)
{
	std::cout << "CP0G-TP: Robot Superped up using the Copy constructor from " << rhs.getName() << "\n";
	*this = rhs;
}
SuperTrap::~SuperTrap(void)
{
	std::cout << "CP0G-TP: In the Superper for Robot :" << this->m_name << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs)
{
	m_hitpoints 		= rhs.m_hitpoints;
	m_max_hitpoints		= rhs.m_max_hitpoints;
	m_energypoints		= rhs.m_energypoints;
	m_max_energypoints	= rhs.m_max_energypoints;
	m_level				= rhs.m_level;
	m_name				= rhs.m_name;
	m_melee_damage		= rhs.m_melee_damage;
	m_ranged_damage		= rhs.m_ranged_damage;
	m_armor_damage_red	= rhs.m_armor_damage_red;
	std::cout << "CP0G-TP: Robot initialised using the Assignation operator from " << rhs.getName() << "\n";
	return *this;
}