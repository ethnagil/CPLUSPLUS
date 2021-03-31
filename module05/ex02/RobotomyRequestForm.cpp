/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:59 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:42:02 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"
#include <sys/time.h>

RobotomyRequestForm::RobotomyRequestForm(const std::string target):  
	Form("RobotomyRequestForm", 72, 45) { m_target = target; }

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & cp): Form(cp)
{
	m_target = cp.m_target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs)
{
	m_target = rhs.m_target;
	m_signed = rhs.m_signed;
	return *this;
}

void	RobotomyRequestForm::action() const
{
	struct timeval time; 
    gettimeofday(&time,NULL);

	srand((time.tv_sec * 1000000) + (time.tv_usec / 10000000));
	if (rand()%2 == 1)
	{
		std::cout << "Drrrrrrrrrrrrr \n";
		std::cout << m_target << " has been robotomized successfully\n";
	}
	else
		std::cout << m_target << " robotomization has failed\n";
}
