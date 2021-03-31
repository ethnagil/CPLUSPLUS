/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:59 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:42:02 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"

Form::Form( const std::string name, int grade_sign, int grade_exec): m_name(name), m_signed(0), m_grade_sign(grade_sign), m_grade_exec(grade_exec)
{
	if ((grade_sign < MAX) || (grade_exec < MAX))
		throw GradeTooHighException();
	else if ((grade_sign > MIN) || (grade_exec > MIN))
		throw GradeTooLowException();
}

Form::~Form( void ) {}

Form::Form( Form const & cp) :
	m_name(cp.m_name),
	m_signed(cp.m_signed),
	m_grade_sign(cp.m_grade_sign),
	m_grade_exec(cp.m_grade_exec)
{}

Form &Form::operator=( Form const &rhs)
{
	m_signed = rhs.m_signed;
	return *this;
}

std::string		Form::getName() const { return m_name; }

int				Form::getGradeSign() const { return m_grade_sign; }

int				Form::getGradeExec() const { return m_grade_exec; }

int				Form::getStatus() const { return m_signed; }

void			Form::besigned( Bureaucrat &signee)
{
	if (signee.getGrade() <= m_grade_sign)
		signee.signForm(*this);
	else
		throw GradeTooLowException();
}
void			Form::sign() { m_signed = 1; }

std::ostream	&operator<<( std::ostream &o, Form const &f )
{
	if (!f.getStatus())
		o << "Unsigned Form: " << f.getName() << " Required signature grade: " << f.getGradeSign() 
			<< " Requires execution grade: " << f.getGradeExec() << std::endl;
	else
		o << "Signed Form: " << f.getName()
			<< " Requires execution grade: " << f.getGradeExec() << std::endl;
	return o;
}

