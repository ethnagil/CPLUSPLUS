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
#include "Form.hpp"

int	main()
	{
	std::cout << "\n/* Tests using std::exception \n\n";
		try {
			Bureaucrat bigboss("Big Boss", 1);
			Bureaucrat manager("Manager", 100);
			Bureaucrat intern("Intern", 150);			

			Form purchase("Purchase", 5, 100);
			Form sell("Sell", 110, 110);
			Form pingpong("Ping-Pong", 150, 150);

			std::cout << bigboss;
			std::cout << manager;
			std::cout << intern;

			std::cout << purchase;
			std::cout << sell;
			std::cout << pingpong;



			purchase.besigned(bigboss);
//			purchase.besigned(manager);	
			std::cout << purchase;

			sell.besigned(manager);
//			sell.besigned(intern);
			std::cout << sell;

			pingpong.besigned(intern);
			std::cout << pingpong;			
			pingpong.besigned(manager);

			} catch ( std::exception & e ) {
				std::cout << "\nStandard Exception : " << e.what();
			}


	return (0);
}
