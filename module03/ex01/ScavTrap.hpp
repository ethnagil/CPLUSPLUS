/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:54 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:57 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>

class ScavTrap {

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &rhs);
	~ScavTrap( void );
	ScavTrap &operator=(ScavTrap const &rhs);

	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	rangedAttack(std::string const &target);
	unsigned int	meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	unsigned int	challengeNewcomer(std::string const & target);

private:
	int					m_hitpoints;
	unsigned int		m_max_hitpoints;
	int					m_energypoints;
	unsigned int		m_max_energypoints;
	unsigned int		m_level;
	std::string			m_name;
	unsigned int		m_melee_damage;
	unsigned int		m_ranged_damage;
	unsigned int		m_armor_damage_red;	
	std::string			m_lastchallenge;
};

#endif
