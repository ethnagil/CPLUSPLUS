/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:30:47 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:30:52 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

	#include "ZombieEvent.hpp"

	ZombieEvent::ZombieEvent() { };

	ZombieEvent::~ZombieEvent() { };

	Zombie * ZombieEvent::newZombie(std::string name)
	{
		Zombie *newby = new Zombie(name, this->m_type, "Kill them all !!!!!!!!!!!");
		return newby;
	}

	void	ZombieEvent::setZombieType(std::string type)
	{
		this->m_type = type;
	}

	void	ZombieEvent::randomChump()
	{
		std::string names[] = {"Deady", "Grusome", "Headless", "Skeleton", "Scream"};
		bool found = false;
		int choice = 0;

		Zombie *ptr_randy;

		while (!found)
		{
			srand((unsigned int)time(NULL));
			choice = rand() % 5;
			if (this->m_lastname != names[choice])
				found = true;
		}	
		this->m_lastname = names[choice];	
		ptr_randy = ZombieEvent::newZombie(names[choice]);
		ZombieEvent::announce(ptr_randy);
	}

	void	ZombieEvent::announce(Zombie *name)
	{
		std::cout << "Here is a random Zombie...........\n";	
		name->Zombie::advert();
		std::cout << "...........Now he disintegrates...........\n";
		delete name;
	}
