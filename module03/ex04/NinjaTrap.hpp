/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:54 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:57 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
//# include "SuperTrap.hpp"

class NinjaTrap  : virtual public ClapTrap {

public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(std::string super, std::string name);
	NinjaTrap(NinjaTrap const &rhs);
	~NinjaTrap( void );
	NinjaTrap &operator=(NinjaTrap const &rhs);
	unsigned int	ninjaShoebox(ClapTrap const &target);
	unsigned int	ninjaShoebox(FragTrap const &target);
	unsigned int	ninjaShoebox(ScavTrap const &target);
	unsigned int	ninjaShoebox(NinjaTrap const &target);
	unsigned int	rangedAttack(std::string const &target);
	unsigned int	meleeAttack(std::string const &target);

private:
	std::string			m_lastchallenge;
};

#endif
