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
//	std::cout << "Constructor int function called" << std::endl;
	if (n >= pow(2, (31 - m_fractionalBits)))
	{
		m_fpvalue = 0;
		std::cout << "Value passed: "  << n 
				<< " is too big, value set to 0. Maximum value : " 
				<< int(pow(2, (31 - m_fractionalBits))) - 1 << '\n';
	}
	else
		m_fpvalue = n << m_fractionalBits; /* same as multiplying by 2^m_fractionalBits */
}

Fixed::Fixed( float n )
{
//	std::cout << "Constructor float function called" << std::endl;
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
//	std::cout << "Default constructor called" << std::endl;
	m_fpvalue = 0;
}

Fixed::Fixed( Fixed const & cp)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed::~Fixed( void )
{
//	std::cout << "Destructor function called" << std::endl;
}

// Comparaison operators

bool Fixed::operator>( Fixed const &rhs) const {
	return (this->m_fpvalue > rhs.getRawBits());
}
bool Fixed::operator<( Fixed const &rhs) const {
	return (this->m_fpvalue < rhs.getRawBits());
}
bool Fixed::operator>=( Fixed const &rhs) const {
	return (this->m_fpvalue >= rhs.getRawBits());
}
bool Fixed::operator<=( Fixed const &rhs) const {
	return (this->m_fpvalue <= rhs.getRawBits());
}
bool Fixed::operator==( Fixed const &rhs) const {
	return (this->m_fpvalue == rhs.getRawBits());
}
bool Fixed::operator!=( Fixed const &rhs) const {
	return (this->m_fpvalue != rhs.getRawBits());
}

// Transformation operators

float	Fixed::toFloat(void) const
{
	return (m_fpvalue / (float)(1 << m_fractionalBits));
}

int		Fixed::toInt(void) const 
{
	return m_fpvalue >> m_fractionalBits; /* same as dividing by 2^m_fractionalBits */
}



// Getters and Setters

void	Fixed::setRawBits( int const raw )
{
	this->m_fpvalue = raw;
}
int		Fixed::getRawBits( void ) const
{
	return (m_fpvalue);
}

// Assignment operator
Fixed	&Fixed::operator=( Fixed const &rhs)
{
	this->m_fpvalue = rhs.getRawBits();
	return (*this);
}

// Arithmetic operators

Fixed	Fixed::operator+( Fixed const &rhs)
{
	Fixed n;

	n.setRawBits(this->m_fpvalue + rhs.getRawBits());
	return (n);
}
Fixed	Fixed::operator-( Fixed const &rhs)
{
	Fixed n;

	n.setRawBits(this->m_fpvalue - rhs.getRawBits());
	return (n);
}
Fixed	Fixed::operator*( Fixed const &rhs)
{
	//Fixed n(this->toFloat() * rhs.toFloat());
	Fixed n((this->getRawBits() * rhs.getRawBits()) /
			((float)(1 << m_fractionalBits) * (1 << m_fractionalBits)));
	return (n);
}
Fixed	Fixed::operator/( Fixed const &rhs)
{
//	Fixed n(this->toFloat() / rhs.toFloat());
	Fixed n(this->getRawBits() / 
			(float)rhs.getRawBits());

	return (n);
}

// increments decrements
Fixed	&Fixed::operator++()
{
	this->m_fpvalue += 1;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed n = *this;
	++*this;
	return (n);
}
Fixed	&Fixed::operator--()
{
	this->m_fpvalue -= 1;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed n = *this;
	--*this;
	return (n);
}

// MIN and MAX WITH OVERLOAD FOR Constant Objects
Fixed &Fixed::min( Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max( Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &f )
{
	o << f.toFloat();
	return (o);
}
