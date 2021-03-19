/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:54 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:57 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap  : public FragTrap, public NinjaTrap 
{
public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &rhs);
	~SuperTrap( void );
	SuperTrap &operator=(SuperTrap const &rhs);
	using NinjaTrap::rangedAttack;
	using FragTrap::meleeAttack;
};

#endif
