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
#include <iostream>
#include <fstream>


int	main() {
	{
	std::cout << "\n/* Test Nested Exceptions using std::exception \n\n";
		try {
			Bureaucrat person_1( "Huey", 1   );
			Bureaucrat person_2( "Dewey",  2   );
			Bureaucrat person_3( "Louie", 150 );
//			Bureaucrat person_3( "Louie", 151 );	
			std::cout << person_1;
			std::cout << person_2;
			std::cout << person_3;

			try {
				person_3.decrement();
			} catch ( std::exception & e ) {
				std::cout << "\n<Level 1.1> Standard Exception : " << e.what();
			}

			try {
				person_1.increment();
			} catch ( std::exception & e ) {
				std::cout << "\n<Level 1.2> Standard Exception : " << e.what() << std::endl;
			}
		} catch ( std::exception & e ) {
			std::cout << "<Level 0> Standard Exception : " << e.what() << std::endl;
		}

	std::cout << "\n/* Test using Bureaucrat::GradeTooHighException and Bureaucrat::GradeTooLowException:\n\n";

		try {
			Bureaucrat person_4( "Donald Duck", -1000 );
			std::cout << person_4 << "\n";
		} catch ( Bureaucrat::GradeTooHighException & e ) {
			std::cout << e.what() << std::endl;
		} catch ( Bureaucrat::GradeTooLowException & e ) {
			std::cout << e.what() << std::endl;
		}
		try {
			Bureaucrat person_5( "Donald Duck", 1000 );
			std::cout << person_5 << "\n";
		} catch ( Bureaucrat::GradeTooHighException & e ) {
			std::cout << e.what() << std::endl;
		} catch ( Bureaucrat::GradeTooLowException & e ) {
			std::cout << e.what() << std::endl;
		}

	std::cout << "\n/* Test using generic catch :\n\n";

		try {
			Bureaucrat person_6( "Minnie Mouse", 21 );
			std::cout << person_6 << "\n";
			throw 20;
		} catch ( std::exception & e ) {
			std::cout << "Standard Exception : " << e.what() << std::endl;
		} catch ( ... ) {
			std::cout << "* some other exception type *" << std::endl;
		}
	}
	return (0);
}
