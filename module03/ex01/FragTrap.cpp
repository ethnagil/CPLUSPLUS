/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:07 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:48 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor and Destructor
FragTrap::FragTrap( void ) : m_hitpoints(100), m_max_hitpoints(100), m_energypoints(100), m_max_energypoints(100), m_level(1), m_name("ClapTrap"), m_melee_damage(30), m_ranged_damage(20), m_armor_damage_red(5)
{
	std::cout << "FR4G-TP: Booting up Robot : " << this->m_name << std::endl;
}

FragTrap::FragTrap( std::string name ) : m_hitpoints(100), m_max_hitpoints(100), m_energypoints(100), m_max_energypoints(100), m_level(1), m_name(name), m_melee_damage(30), m_ranged_damage(20), m_armor_damage_red(5)
{
	std::cout << "FR4G-TP: Booting up Robot : " << this->m_name << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs)
{
	std::cout << "FR4G-TP: Robot Booted using the Copy constructor from " << rhs.getName() << "\n";
	*this = rhs;
}
FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP: The plug has been pulled on Robot :" << this->m_name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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
	std::cout << "FR4G-TP: Robot initialised using the Assignation operator from " << rhs.getName() << "\n";
	return *this;
}

std::string		FragTrap::getName() const
{
	return (this-> m_name);
}

unsigned int	FragTrap::getHitPoints() const
{
	return (this-> m_hitpoints);
}

unsigned int	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << m_name << " \e[96;4mis attacking\e[0m " << target  << " in the distance, causing  " << m_ranged_damage << " damage points ! \n";
	return m_ranged_damage;
}
unsigned int	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << m_name << " \e[91;4mis engaging\e[0m " << target  << " directly, causing  " << m_melee_damage << " damage points ! \n";
	return m_melee_damage;
}
void			FragTrap::takeDamage(unsigned int amount)
{
	int damage = amount;

	std::cout << "FR4G-TP: \e[32;4mArmor protection gain:\e[0m " <<  this->m_armor_damage_red << '\n';
	damage -= this->m_armor_damage_red;
	if (amount > 0)
		this->m_hitpoints -= damage;
	if (this->m_hitpoints < 0)
		this->m_hitpoints = 0;
	std::cout << "FR4G-TP: " << this->m_name << " \e[93;4mYIKES I'm down to\e[0m " << m_hitpoints << std::endl;
}
void			FragTrap::beRepaired(unsigned int amount)
{
	this->m_hitpoints += amount;
	if (this->m_hitpoints > (int)this->m_max_hitpoints)
		this->m_hitpoints = (int)this->m_max_hitpoints;
	std::cout << "\nFR4G-TP: " << this->m_name << " \e[32;4mThanks for repairing me: YESSSS I'm back up to\e[0m " << m_hitpoints << std::endl;
}
unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
		std::string names[] = {"Fistfull of hurt", "Salt the wound", "Hellfire Halitosis", "Release the Beast", "Killer Rabbits"};
		bool found = false;
		int choice = 0;
		std::string	challenge;

		if (this->m_energypoints < 25)
		{
			std::cout << "FR4G-TP: \e[91;4mALERT ALERT\e[0m " << m_name << " You don't have enough energy to launch this attack \n";
			return (0);
		}
		while (!found)
		{
			srand((unsigned int)time(NULL)+ (choice));
			choice = (rand() % 5);
			challenge = names[choice];
			if (this->m_lastvaulthunter != names[choice])
				found = true;
		}
		this->m_lastvaulthunter = names[choice];
		this->m_energypoints -= 25;
		std::cout << "FR4G-TP: \e[91;4mVault Hunter Attack.....\e[0m" << challenge << ":" << (choice+1) * 20 << "\e[91;4m.....LOOK OUT !\e[0m " << target << std::endl;
		return ((choice+1) * 20);
}
