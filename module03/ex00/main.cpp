/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:04:08 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/09 13:04:13 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int
main(void)
{
    // Start!
    std::cout << "\n\e[96;4m________LET THE BATTLE BEGIN_______\n"<< std::endl;
    FragTrap    Athena("Athena");
    FragTrap    Nisha("Nisha");

    // Athena vs Nisha
    std::cout << std::endl << "ROUND 1" << std::endl;
    Nisha.takeDamage(Athena.meleeAttack(Nisha.getName()));

    // Nisha vs Athena
    std::cout << std::endl << "ROUND 2" << std::endl;
    Athena.takeDamage(Nisha.rangedAttack(Athena.getName()));

	Athena.beRepaired(2000);

    // Random Attack
    std::cout << std::endl << "ROUND 3" << std::endl;
    Nisha.takeDamage(Athena.vaulthunter_dot_exe(Nisha.getName()));

	   // Athena vs Nisha
    std::cout << std::endl << "ROUND 10" << std::endl;
    Nisha.takeDamage(Athena.meleeAttack(Nisha.getName()));

	Nisha.beRepaired(2000);

    // Nisha vs Athena
    std::cout << std::endl << "ROUND 20" << std::endl;
    Athena.takeDamage(Nisha.rangedAttack(Athena.getName()));

    // Random Attack
    std::cout << std::endl << "ROUND 30" << std::endl;
    Athena.takeDamage(Nisha.vaulthunter_dot_exe(Athena.getName()));

	std::cout << std::endl << "ROUND 31" << std::endl;
    Athena.takeDamage(Nisha.vaulthunter_dot_exe(Athena.getName()));

	Athena.beRepaired(50);

	std::cout << std::endl << "ROUND 32" << std::endl;
    Athena.takeDamage(Nisha.vaulthunter_dot_exe(Athena.getName()));

	Athena.beRepaired(200);

	std::cout << std::endl << "ROUND 33" << std::endl;
    Athena.takeDamage(Nisha.vaulthunter_dot_exe(Athena.getName()));

	std::cout << std::endl << "ROUND 34" << std::endl;
    Athena.takeDamage(Nisha.vaulthunter_dot_exe(Athena.getName()));

	/* Create a default robot, use the copy function to create another, use the = function to craete another */

    FragTrap robot1("ONE NAME SERVES ALL");
    FragTrap robot2(robot1);
    FragTrap robot3("Robot3");

    robot3 = robot1;
	
    return (0);
}