/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:59 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:42:02 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"
#include <sys/time.h>

PresidentialPardonForm::PresidentialPardonForm(const std::string target):  
	Form("PresidentialPardonForm", 25, 5) { m_target = target; }

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & cp): Form(cp)
{
	m_target = cp.m_target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs)
{
	m_target = rhs.m_target;
	m_signed = rhs.m_signed;
	return *this;
}

void	PresidentialPardonForm::action() const
{
	std::cout << m_target << " has been pardoned by Zafod Beeblebrox.\n";
}
