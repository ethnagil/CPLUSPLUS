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
# include <cmath>

class Fixed {

public:
	Fixed( int n );
	Fixed( float n );
	Fixed( void );
	Fixed( Fixed const &rhs);
	~Fixed( void );

	bool operator>( Fixed const &rhs) const;
	bool operator<( Fixed const &rhs) const;
	bool operator>=( Fixed const &rhs) const;
	bool operator<=( Fixed const &rhs) const;
	bool operator==( Fixed const &rhs) const;
	bool operator!=( Fixed const &rhs) const;

	Fixed &operator=( Fixed const &rhs);
	Fixed operator+( Fixed const &rhs);
	Fixed operator-( Fixed const &rhs);
	Fixed operator*( Fixed const &rhs);
	Fixed operator/( Fixed const &rhs);

	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat(void) const;
	int		toInt(void) const;


private:
	int		m_fpvalue;
	const static int m_fractionalBits = 8;
	
};

std::ostream	&operator<<( std::ostream &o, Fixed const &f );

#endif
