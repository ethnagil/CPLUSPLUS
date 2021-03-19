/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:07 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:48 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

// Constructor and Destructor
NinjaTrap::NinjaTrap( void )
{
	m_hitpoints = 60; 
	m_max_hitpoints = 60; 
	m_energypoints = 120; 
	m_max_energypoints = 120;
	m_name = "NinjaTrap";
	m_melee_damage = 60;
	m_ranged_damage = 5;
	m_armor_damage_red = 0;
	std::cout << "NJ8G-TP: Ninjaing up Robot : " << this->m_name << std::endl;
}

NinjaTrap::NinjaTrap( std::string name ) 
{
	m_hitpoints = 60; 
	m_max_hitpoints = 60; 
	m_energypoints = 120; 
	m_max_energypoints = 120;
	m_name = name;
	m_melee_damage = 60;
	m_ranged_damage = 5;
	m_armor_damage_red = 0;
	std::cout << "NJ8G-TP: Ninjaing up Robot : " << this->m_name << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &rhs)
{
	std::cout << "NJ8G-TP: Robot Ninja'd using the Copy constructor from " << rhs.getName() << "\n";
	*this = rhs;
}
NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NJ8G-TP: RIP Robot :" << this->m_name << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs)
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
	std::cout << "Robot pumped using the Assignation operator from " << rhs.getName() << "\n";
	return *this;
}

unsigned int	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NJ8G-TP " << m_name << " \e[96;4mis Ninjaly attacking\e[0m " << target  << " in the distance, causing  " << m_ranged_damage << " damage points ! \n";
	return m_ranged_damage;
}
unsigned int	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NJ8G-TP " << m_name << " \e[91;4mis Ninjaly engaging\e[0m " << target  << " directly, causing  " << m_melee_damage << " damage points ! \n";
	return m_melee_damage;
}
unsigned int	NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	std::cout << "NJ8G-TP: \e[91;4mninjaShoebox ClapTrap Attack.....\e[0m" << ":" << "50" << "\e[91;4m.....CI CI CI !\e[0m " << target.getName() << std::endl;
	return (50);
}
unsigned int	NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << "NJ8G-TP: \e[91;4mninjaShoebox FragTrap Attack.....\e[0m" << ":" << "40" << "\e[91;4m.....FI FI FI ! !\e[0m " << target.getName() << std::endl;
	return (40);
}
unsigned int	NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << "NJ8G-TP: \e[91;4mninjaShoebox ScavTrap Attack.....\e[0m" << ":" << "30" << "\e[91;4m.....SI SI SI ! !\e[0m " << target.getName() << std::endl;
	return (30);
}
unsigned int	NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << "NJ8G-TP: \e[91;4mninjaShoebox NinjaTrap Attack.....\e[0m" << ":" << "20" << "\e[91;4m.....NI NI NI ! !\e[0m " << target.getName() << std::endl;
	return (20);
}
