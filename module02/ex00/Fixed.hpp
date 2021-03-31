/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:54 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:57 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <math.h>

class Fixed {

public:
	Fixed( int n );
	Fixed( void );
	Fixed( Fixed const & cp);
	~Fixed( void );
	Fixed& operator=( Fixed const &cp);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int		m_fpvalue;
	const static int m_fractionalBits = 8;
	
};

#endif
