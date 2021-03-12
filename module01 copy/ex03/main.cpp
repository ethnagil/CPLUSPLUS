/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:57:24 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:58:03 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void zombieattack()
{
	std::cout << "\n First Zombie invasion - 10 Zombies \n";
	ZombieHorde invasion = ZombieHorde(10);
	invasion.announce();
	std::cout << "\n Second Zombie invasion - 3 Zombies \n";
	ZombieHorde invasion2 = ZombieHorde(3);
	invasion2.announce();
	std::cout << "\n .......We are leaving this realm, thus killing all Zombies in this Horde...... \n\n";	
}
int main()
{
	zombieattack();

	return 0;
}
