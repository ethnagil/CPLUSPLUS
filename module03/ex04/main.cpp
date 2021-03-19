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
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

/* check out the need for ostream& operator<< */

int main()
{
    {
    // Start!
    std::cout << "\n\n \e[96;4m________LET THE FRAGTRAP BATTLE BEGIN_______\n"<< std::endl;
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

    std::cout << "\n\e[96;4m||||||||||||||||||| NEW NINJA ATTACKS |||||||||||||||||||||||\e[0m\n";

    NinjaTrap   SoSilent("SoSilent");

    Athena.takeDamage(SoSilent.ninjaShoebox(Athena));
    Nisha.takeDamage(SoSilent.ninjaShoebox(Nisha));

	/* Create a default robot, use the copy function to create another, use the = function to craete another */
   std::cout << "\n___________Use the copy and assignment functions______________\n";

    FragTrap robot1("ONE NAME SERVES ALL");
    FragTrap robot2(robot1);
    FragTrap robot3("Robot3");

    robot3 = robot1;
    }
    {
    std::cout << "\n\e[96;4m________LET THE SCAVTRAP BATTLE BEGIN_______\n"<< std::endl;
    ScavTrap    Unconquered("Unconquered");
    ScavTrap    Gunsight("Gunsight");

    // Unconquered vs Gunsight
    std::cout << std::endl << "ROUND 1" << std::endl;
    Gunsight.takeDamage(Unconquered.meleeAttack(Gunsight.getName()));

    // Gunsight vs Unconquered
    std::cout << std::endl << "ROUND 2" << std::endl;
    Unconquered.takeDamage(Gunsight.rangedAttack(Unconquered.getName()));

	Unconquered.beRepaired(2000);

    // Random Attack
    std::cout << std::endl << "ROUND 3" << std::endl;
    Gunsight.takeDamage(Unconquered.challengeNewcomer(Gunsight.getName()));

	   // Unconquered vs Gunsight
    std::cout << std::endl << "ROUND 10" << std::endl;
    Gunsight.takeDamage(Unconquered.meleeAttack(Gunsight.getName()));

	Gunsight.beRepaired(2000);

    // Gunsight vs Unconquered
    std::cout << std::endl << "ROUND 20" << std::endl;
    Unconquered.takeDamage(Gunsight.rangedAttack(Unconquered.getName()));

    // Random Attack
    std::cout << std::endl << "ROUND 30" << std::endl;
    Unconquered.takeDamage(Gunsight.challengeNewcomer(Unconquered.getName()));

	std::cout << std::endl << "ROUND 31" << std::endl;
    Unconquered.takeDamage(Gunsight.challengeNewcomer(Unconquered.getName()));

	Unconquered.beRepaired(50);

	std::cout << std::endl << "ROUND 32" << std::endl;
    Unconquered.takeDamage(Gunsight.challengeNewcomer(Unconquered.getName()));

	Unconquered.beRepaired(200);

	std::cout << std::endl << "ROUND 33" << std::endl;
    Unconquered.takeDamage(Gunsight.challengeNewcomer(Unconquered.getName()));

	std::cout << std::endl << "ROUND 34" << std::endl;
    Unconquered.takeDamage(Gunsight.challengeNewcomer(Unconquered.getName()));

    std::cout << "\n\e[96;4m||||||||||||||||||| NEW NINJA ATTACKS |||||||||||||||||||||||\e[0m\n";

    NinjaTrap   SoSilent("SoSilent");

    Unconquered.takeDamage(SoSilent.ninjaShoebox(Unconquered));
    Gunsight.takeDamage(SoSilent.ninjaShoebox(Gunsight));

	/* Create a default robot, use the copy function to create another, use the = function to craete another */
    std::cout << "\n___________Use the copy and assignment functions______________\n";

    ScavTrap robot4("MIGHTYME");
    ScavTrap robot5(robot4);
    ScavTrap robot6("Robot6");

    robot6 = robot4;
    }
    {
    std::cout << "\n\e[96;4m________LET THE CLAPTRAP BATTLE BEGIN_______\n"<< std::endl;
    ClapTrap    DenisTheMenace("DenisTheMenace");
    ClapTrap    MoonWalker("MoonWalker");

    // DenisTheMenace vs MoonWalker
    std::cout << std::endl << "ROUND 1" << std::endl;
    MoonWalker.takeDamage(DenisTheMenace.meleeAttack(MoonWalker.getName()));

    // MoonWalker vs DenisTheMenace
    std::cout << std::endl << "ROUND 2" << std::endl;
    DenisTheMenace.takeDamage(MoonWalker.rangedAttack(DenisTheMenace.getName()));

	DenisTheMenace.beRepaired(2000);

	   // DenisTheMenace vs MoonWalker
    std::cout << std::endl << "ROUND 10" << std::endl;
    MoonWalker.takeDamage(DenisTheMenace.meleeAttack(MoonWalker.getName()));

	MoonWalker.beRepaired(2000);

    // MoonWalker vs DenisTheMenace
    std::cout << std::endl << "ROUND 20" << std::endl;
    DenisTheMenace.takeDamage(MoonWalker.rangedAttack(DenisTheMenace.getName()));

	DenisTheMenace.beRepaired(50);

	std::cout << "\n\e[96;4m||||||||||||||||||| NEW NINJA ATTACKS |||||||||||||||||||||||\e[0m\n";

    NinjaTrap   SoSilent("SoSilent");

    DenisTheMenace.takeDamage(SoSilent.ninjaShoebox(DenisTheMenace));
    MoonWalker.takeDamage(SoSilent.ninjaShoebox(MoonWalker));

	/* Create a default robot, use the copy function to create another, use the = function to craete another */
    std::cout << "\n___________Use the copy and assignment functions______________\n";


    ClapTrap robot4("EVERYNAME");
    ClapTrap robot5(robot4);
    ClapTrap robot6("Robot6");

    robot6 = robot4;
    }

    {
    std::cout << "\n\e[96;4m________LET THE NINJATRAP BATTLE BEGIN_______\n"<< std::endl;
    NinjaTrap    NowYouSeeMe("NowYouSeeMe");
    NinjaTrap    NowYouDont("NowYouDont");

    // NowYouSeeMe vs NowYouDont
    std::cout << std::endl << "ROUND 1" << std::endl;
    NowYouDont.takeDamage(NowYouSeeMe.meleeAttack(NowYouDont.getName()));

    // NowYouDont vs NowYouSeeMe
    std::cout << std::endl << "ROUND 2" << std::endl;
    NowYouSeeMe.takeDamage(NowYouDont.rangedAttack(NowYouSeeMe.getName()));

	NowYouSeeMe.beRepaired(2000);

	   // NowYouSeeMe vs NowYouDont
    std::cout << std::endl << "ROUND 10" << std::endl;
    NowYouDont.takeDamage(NowYouSeeMe.meleeAttack(NowYouDont.getName()));

	NowYouDont.beRepaired(2000);

    // NowYouDont vs NowYouSeeMe
    std::cout << std::endl << "ROUND 20" << std::endl;
    NowYouSeeMe.takeDamage(NowYouDont.rangedAttack(NowYouSeeMe.getName()));

	NowYouSeeMe.beRepaired(50);

	std::cout << "\n\e[96;4m||||||||||||||||||| NEW NINJA ATTACKS |||||||||||||||||||||||\e[0m\n";

    NinjaTrap   SoSilent("SoSilent");

    NowYouSeeMe.takeDamage(SoSilent.ninjaShoebox(NowYouSeeMe));
    NowYouDont.takeDamage(SoSilent.ninjaShoebox(NowYouDont));

	/* Create a default robot, use the copy function to create another, use the = function to craete another */
    std::cout << "\n___________Use the copy and assignment functions______________\n";


    NinjaTrap robot4("EVERYNAME");
    NinjaTrap robot5(robot4);
    NinjaTrap robot6("Robot6");

    robot6 = robot4;
    }
    {
    std::cout << "\n\e[96;4m________LET THE SUPERTRAP BATTLE BEGIN_______\n"<< std::endl;
    SuperTrap    SuperMe("SuperMe");
    SuperTrap    SuperYou("SuperYou");

    // SuperMe vs SuperYou
    std::cout << std::endl << "ROUND 1" << std::endl;
    SuperYou.takeDamage(SuperMe.meleeAttack(SuperYou.getName()));

    // SuperYou vs SuperMe
    std::cout << std::endl << "ROUND 2" << std::endl;
    SuperMe.takeDamage(SuperYou.rangedAttack(SuperMe.getName()));

	SuperMe.beRepaired(2000);

	   // SuperMe vs SuperYou
    std::cout << std::endl << "ROUND 10" << std::endl;
    SuperYou.takeDamage(SuperMe.meleeAttack(SuperYou.getName()));

	SuperYou.beRepaired(2000);

    // SuperYou vs SuperMe
    std::cout << std::endl << "ROUND 20" << std::endl;
    SuperMe.takeDamage(SuperYou.rangedAttack(SuperMe.getName()));

	SuperMe.beRepaired(50);

    // Random Attack
    std::cout << std::endl << "ROUND 30" << std::endl;
    SuperYou.takeDamage(SuperMe.vaulthunter_dot_exe(SuperYou.getName()));

	std::cout << std::endl << "ROUND 31" << std::endl;
    SuperYou.takeDamage(SuperMe.vaulthunter_dot_exe(SuperYou.getName()));


	std::cout << "\n\e[96;4m||||||||||||||||||| NINJA ATTACKS |||||||||||||||||||||||\e[0m\n";

    NinjaTrap   SoSilent("SoSilent");

    SoSilent.takeDamage(SuperMe.ninjaShoebox(SoSilent));
    SoSilent.takeDamage(SuperYou.ninjaShoebox(SoSilent));

	/* Create a default robot, use the copy function to create another, use the = function to craete another */
    std::cout << "\n___________Use the copy and assignment functions______________\n";


    SuperTrap robot4("EVERYNAME");
    SuperTrap robot5(robot4);
    SuperTrap robot6("Robot6");

    robot6 = robot4;
    }
    return (0);
}
