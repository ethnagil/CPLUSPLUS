/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:57:01 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:57:03 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

	#include "ZombieHorde.hpp"

	ZombieHorde::ZombieHorde(int n): m_n(n)
	{ 
		this->m_critter = new Zombie[n];
		int i = 0;

		while (i < n)
		{
			this->m_critter[i].setName(this->randomChump());
			i++;
		}
	}

	ZombieHorde::~ZombieHorde() 
	{
		int i = 0;

		while (i < this->m_n)
		{
			this->m_critter[i].Zombie::announce("I'mmmm dying.....");
			i++;
		}
		delete [] this->m_critter;
		this->m_critter = nullptr;
	}

	std::string	 ZombieHorde::randomChump()
	{
		std::string names[] = {"Deady", "Grusome", "Headless", "Skeleton", "Scream", "Creepy"};
		bool found = false;
		int choice = 0;

		while (!found)
		{
			srand((unsigned int)time(NULL));
			choice = (rand() % 5);
//			std::cout << this->m_lastname << '\n';
			if (this->m_lastname != names[choice])
				found = true;
		}
		this->m_lastname = names[choice];
		return names[choice];
	}

	void	ZombieHorde::announce()
	{
		int i = 0;

		while (i < this->m_n)
		{
			this->m_critter[i++].Zombie::announce("New Horde Meember.....");
		}
	}
