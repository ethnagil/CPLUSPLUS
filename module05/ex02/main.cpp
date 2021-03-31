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

int	main()
	{
	std::cout << "\n/* General Tests using std::exception \n\n";
		try {
			Bureaucrat bigboss("Big Boss", 1);
			Bureaucrat manager("Manager", 60);
			Bureaucrat intern("Intern", 23);			

			ShrubberyCreationForm home("Home");
			RobotomyRequestForm mixer("Mixer");
			PresidentialPardonForm macron("Macron");

			std::cout << bigboss;
			std::cout << manager;
			std::cout << intern;

			std::cout << home;
			std::cout << mixer;
			std::cout << macron;	

			home.besigned(bigboss);
			home.execute(bigboss);

			mixer.besigned(manager);
			mixer.execute(bigboss);

			macron.besigned(intern);
			macron.execute(bigboss);

			} catch ( std::exception & e ) {
				std::cout << "\nStandard Exception : " << e.what();
			}


	return (0);
}
