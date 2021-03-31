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
#include "Form.hpp"

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
}

Bureaucrat::Bureaucrat( Bureaucrat const & cp) : m_name(cp.m_name), m_grade(cp.m_grade)
{
	std::cout << "New Bureaucrat is the spitting image of " << cp << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {}

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

void			Bureaucrat::signForm(Form &tobesigned){
	if (tobesigned.getStatus())
		std::cout << "Bureaucrat "<< m_name << " cannot sign form " << tobesigned.getName() 
					<< " because it is already signed!\n";
	else
	{
		tobesigned.sign();
		std::cout << "Bureaucrat "<< m_name << " signs " << tobesigned.getName() << '\n';
	}
}

std::ostream		&operator<<( std::ostream &o, Bureaucrat const &f )
{
	o << f.getName() << ", bureaucrat grade " << f.getGrade() << std::endl;
	return o;
}

