/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:54 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:57 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &rhs);
	~FragTrap( void );
	FragTrap &operator=(FragTrap const &rhs);
	unsigned int	rangedAttack(std::string const &target);
	unsigned int	meleeAttack(std::string const &target);
	unsigned int	vaulthunter_dot_exe(std::string const & target);

protected:
	std::string			m_lastvaulthunter;

};

#endif
