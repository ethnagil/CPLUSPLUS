/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:07 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:48 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor and Destructor
ClapTrap::ClapTrap( void ) : m_hitpoints(100), m_max_hitpoints(100), m_energypoints(100), m_max_energypoints(100), m_level(1), m_name("ClapTrap"), m_melee_damage(30), m_ranged_damage(20), m_armor_damage_red(5)
{
	std::cout << "CP0G-TP: Clapping up Robot : " << this->m_name << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : m_hitpoints(100), m_max_hitpoints(100), m_energypoints(100), m_max_energypoints(100), m_level(1), m_name(name), m_melee_damage(30), m_ranged_damage(20), m_armor_damage_red(5)
{
	std::cout << "CP0G-TP: Clapping up Robot : " << this->m_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "CP0G-TP: Robot Clapped up using the Copy constructor from " << rhs.getName() << "\n";
	*this = rhs;
}
ClapTrap::~ClapTrap(void)
{
	std::cout << "CP0G-TP: In the clapper for Robot :" << this->m_name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
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

std::string		ClapTrap::getName() const
{
	return (this->m_name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (this->m_hitpoints);
}

unsigned int	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CP0G-TP " << m_name << " \e[96;4mis attacking\e[0m " << target  << " in the distance, causing  " << m_ranged_damage << " damage points ! \n";
	return m_ranged_damage;
}
unsigned int	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CP0G-TP " << m_name << " \e[91;4mis engaging\e[0m " << target  << " directly, causing  " << m_melee_damage << " damage points ! \n";
	return m_melee_damage;
}
void			ClapTrap::takeDamage(unsigned int amount)
{
	int damage = amount;

	std::cout << "CP0G-TP: \e[32;4mArmor protection gain:\e[0m " <<  this->m_armor_damage_red << '\n';
	damage -= this->m_armor_damage_red;
	if (amount > 0)
		this->m_hitpoints -= damage;
	if (this->m_hitpoints < 0)
		this->m_hitpoints = 0;
	std::cout << "CP0G-TP: " << this->m_name << " \e[93;4mYIKES I'm down to\e[0m " << m_hitpoints << std::endl;
}
void			ClapTrap::beRepaired(unsigned int amount)
{
	this->m_hitpoints += amount;
	if (this->m_hitpoints > (int)this->m_max_hitpoints)
		this->m_hitpoints = (int)this->m_max_hitpoints;
	std::cout << "\nCP0G-TP: " << this->m_name << " \e[32;4mThanks for repairing me: YESSSS I'm back up to\e[0m " << m_hitpoints << std::endl;
}
