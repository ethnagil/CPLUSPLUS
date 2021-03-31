/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:42:15 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:42:17 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
	{
		try {
			Intern someRandomIntern;

			std::cout << "\n BUREAUCRAT DETAILS \n\n";

			Bureaucrat bigboss("Big Boss", 1);
			Bureaucrat manager("Manager", 60);
			Bureaucrat intern("Intern", 145);	

			std::cout << bigboss;
			std::cout << manager;
			std::cout << intern;

			std::cout << "\n FORMS CREATED BY INTERN DETAILS \n\n";

			Form * home;
			Form * mixer;
			Form * macron;

			home = someRandomIntern.makeForm("ShrubberyCreationForm", "Home");
			mixer = someRandomIntern.makeForm("RobotomyRequestForm","Mixer");
			macron = someRandomIntern.makeForm("PresidentialPardonForm", "Macron");

			std::cout << *home;
			std::cout << *mixer;
			std::cout << *macron;	

			std::cout << "\n VARIOUS ACTIONS \n\n";		

			home->besigned(intern);
			home->execute(bigboss);

			mixer->besigned(manager);
			mixer->execute(bigboss);

			macron->besigned(bigboss);
			macron->execute(bigboss);

			delete home;
			delete mixer;
			delete macron;

			} catch ( std::exception & e ) {
				std::cout << "\nStandard Exception : " << e.what();
			}


	return (0);
}
