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
# include "ClapTrap.hpp"

class ScavTrap  : virtual public ClapTrap {

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &rhs);
	~ScavTrap( void );
	ScavTrap &operator=(ScavTrap const &rhs);
	unsigned int	challengeNewcomer(std::string const & target);
	unsigned int	rangedAttack(std::string const &target);
	unsigned int	meleeAttack(std::string const &target);

private:
	std::string			m_lastchallenge;
};

#endif
