/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:03:07 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:03:48 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor and Destructor
Fixed::Fixed( int n )
{
	std::cout << "Constructor int function called" << std::endl;
	if (n >= pow(2, (31 - m_fractionalBits)))
	{
		m_fpvalue = 0;
		std::cout << "Value passed: "  << n 
				<< " is too big, value set to 0. Maximum value : " 
				<< int(pow(2, (31 - m_fractionalBits))) - 1 << '\n';
	}
	else
		m_fpvalue = n << m_fractionalBits;
}

Fixed::Fixed( float n )
{
	std::cout << "Constructor float function called" << std::endl;
	if (n >= pow(2, (31 - m_fractionalBits)))
	{
		m_fpvalue = 0;
		std::cout << "Value passed: "  << n 
				<< " is too big, value set to 0. Maximum value : " 
				<< int(pow(2, (31 - m_fractionalBits))) - 1 << '\n';
	}
	else
	{
		m_fpvalue = (int)roundf(n * (1 << m_fractionalBits));
	}
}

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	m_fpvalue = 0;
}

Fixed::Fixed( Fixed const & cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor function called" << std::endl;
}

// Transformation operators

float	Fixed::toFloat(void) const
{
	return (m_fpvalue / (float)(1 << m_fractionalBits));
}

int		Fixed::toInt(void) const 
{
	return m_fpvalue >> m_fractionalBits;
}

// Getters and Setters

void	Fixed::setRawBits( int const raw )
{
	std::cout << "Setting to raw value " << raw << std::endl;
	this->m_fpvalue = raw;
}
int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_fpvalue);
}

// Assignment operator
Fixed	&Fixed::operator=( Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->m_fpvalue = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &f )
{
	o << f.toFloat();
	return (o);
}
