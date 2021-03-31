/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:59 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:42:02 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern( void ) {}

Form	*Intern::makeForm(std::string form, std::string target)
{
	Form * make;
	
	switch (form[0])
	{
		case 'S':
			make = new ShrubberyCreationForm(target);
			break;
		case 'R':
			make = new RobotomyRequestForm(target);
			break;		
		case 'P':
			make = new PresidentialPardonForm(target);
			break;		
		default:
			throw UnknownFormException();
	}
	std::cout << "Intern creates " << form << '\n';
	return make;
}
