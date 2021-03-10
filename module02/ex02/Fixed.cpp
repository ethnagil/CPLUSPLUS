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
	m_fpvalue = n << m_fractionalBits;
}
Fixed::Fixed( float n )
{
//	std::cout << "Constructor float function called" << std::endl;
	m_fpvalue = (int)roundf(n * (1 << m_fractionalBits));
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
	return m_fpvalue >> m_fractionalBits;
}



// Getters and Setters

void	Fixed::setRawBits( int const raw )
{
//	std::cout << "Setting to raw value " << raw << '\n';
	this->m_fpvalue = raw;
}
int		Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (m_fpvalue);
}

// Assignment operator
Fixed	&Fixed::operator=( Fixed const &rhs)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->m_fpvalue = rhs.getRawBits();
	return (*this);
}

// Arithmetic operators

Fixed	Fixed::operator+( Fixed const &rhs)
{
	Fixed n;

//	std::cout << "+ operator called" << std::endl;
	n.setRawBits(this->m_fpvalue + rhs.getRawBits());
	return (n);
}
Fixed	Fixed::operator-( Fixed const &rhs)
{
	Fixed n;

//	std::cout << "+ operator called" << std::endl;
	n.setRawBits(this->m_fpvalue - rhs.getRawBits());
	return (n);
}
Fixed	Fixed::operator*( Fixed const &rhs)
{
	Fixed n(this->toFloat() * rhs.toFloat());
//	std::cout << "* operator called" << std::endl;
	return (n);
}
Fixed	Fixed::operator/( Fixed const &rhs)
{
	Fixed n(this->toFloat() / rhs.toFloat());
//	std::cout << "/ operator called" << std::endl;
	return (n);
}

// increments decrements
Fixed	&Fixed::operator++()
{
//	std::cout << "++ increment called" << std::endl;
	this->m_fpvalue += 1;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
//	std::cout << "increment called ++" << std::endl;
	Fixed n = *this;
	Fixed::operator++();
	return (n);
}
Fixed	&Fixed::operator--()
{
//	std::cout << "-- increment called" << std::endl;
	this->m_fpvalue -= 1;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
//	std::cout << "increment called --" << std::endl;
	Fixed n = *this;
	Fixed::operator--();
	return (n);
}


std::ostream	&operator<<( std::ostream &o, Fixed const &f )
{
	o << f.toFloat();
	return (o);
}
