/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:07 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:48 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// Constructor and Destructor
ScavTrap::ScavTrap( void )
{
	m_name = "ScavTrap";
	m_melee_damage = 20;
	m_ranged_damage = 15;
	m_armor_damage_red = 3;
	std::cout << "SV5G-TP: Charging up Robot : " << this->m_name << std::endl;
}

ScavTrap::ScavTrap( std::string name ) 
{
	m_name = name;
	m_melee_damage = 20;
	m_ranged_damage = 15;
	m_armor_damage_red = 3;
	std::cout << "SV5G-TP: Charging up Robot : " << this->m_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << "SV5G-TP: Robot Charged using the Copy constructor from " << rhs.getName() << "\n";
	*this = rhs;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "SV5G-TP: RIP Robot :" << this->m_name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

unsigned int	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SV5G-TP " << m_name << " \e[96;4mis scavagely attacking\e[0m " << target  << " in the distance, causing  " << m_ranged_damage << " damage points ! \n";
	return m_ranged_damage;
}
unsigned int	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SV5G-TP " << m_name << " \e[91;4mis scavagely engaging\e[0m " << target  << " directly, causing  " << m_melee_damage << " damage points ! \n";
	return m_melee_damage;
}
unsigned int	ScavTrap::challengeNewcomer(std::string const & target)
{
		std::string names[] = {"Open Sesame", "Twin Towers", "Dragonology", "Queens Gambit", "Fortress"};
		bool found = false;
		int choice = 0;
		std::string	challenge;

		if (this->m_energypoints < 25)
		{
			std::cout << "SV5G-TP: \e[91;4mALERT ALERT\e[0m " << m_name << " You don't have enough energy to launch this attack \n";
			return (0);
		}
		while (!found)
		{
			srand((unsigned int)time(NULL)+ (choice));
			choice = (rand() % 5);
			challenge = names[choice];
			if (this->m_lastchallenge != names[choice])
				found = true;
		}
		this->m_lastchallenge = names[choice];
		this->m_energypoints -= 25;
		std::cout << "SV5G-TP: \e[91;4mChallenge Newcomer Attack.....\e[0m" << challenge << ":" << (choice+1) * 20 << "\e[91;4m.....GET READY !\e[0m " << target << std::endl;
		return ((choice+1) * 20);
}





