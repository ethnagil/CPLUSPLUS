/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:31:13 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:33:54 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie unknown1("Kinky");
	Zombie unknown2("Linky");
	Zombie *event1;

	ZombieEvent scare;

	std::cout << "2 Zombies created on the stack \n";
	unknown1.advert();
	unknown2.advert();

	std::cout << "\n A named Zombie Harry created on the heap for the SCARY Event \n";
	scare.ZombieEvent::setZombieType("SCARY");
	event1 = scare.ZombieEvent::newZombie("Harry");
	event1->Zombie::advert();

	std::cout << "\nRandom Zombies created on the heap for the Event and are killed off after they announce themselves.\n";
	scare.ZombieEvent::randomChump();
	scare.ZombieEvent::randomChump();
	scare.ZombieEvent::randomChump();
	scare.ZombieEvent::randomChump();

	std::cout << "\nNow we must kill the named zombie Harry\n";
	delete event1; // Must delete the named Zombies
	std::cout << "\nThe stack zombies will be automatically killed on leaving\n";
	return 0;
}
