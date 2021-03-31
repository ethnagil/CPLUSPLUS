/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:59 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:42:02 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string name, int grade ): m_name(name)
{
	if (grade < MAX)
	{
		throw GradeTooHighException();
		m_grade = MAX;
	}
	else if (grade > MIN)
	{
		throw GradeTooLowException();
		m_grade = MIN;
	}
	else
		m_grade = grade;
//	std::cout << "A new Bureaucrat " << m_name << " has arrived" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & cp)
{
	std::cout << "New Bureaucrat is the spitting image of " << cp << std::endl;
	*this = cp;
}

Bureaucrat::~Bureaucrat( void )
{
//	std::cout << "The Bureaucrat " << m_name << " has been fired!" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &cp)
{
	m_grade = cp.m_grade;
	return (*this);
}

std::string		Bureaucrat::getName() const { return m_name; }

int		Bureaucrat::getGrade() const { return m_grade; }

void			Bureaucrat::increment()
{
	if ((m_grade - 1) >= 1)
		m_grade--;
	else
		throw GradeTooHighException();
}

void			Bureaucrat::decrement()
{
	if ((m_grade + 1) <= 150 )
		m_grade++;
	else
		throw GradeTooLowException();
}

std::ostream		&operator<<( std::ostream &o, Bureaucrat const &f )
{
	o << f.getName() << ", bureaucrat grade " << f.getGrade() << std::endl;
	return o;
}

