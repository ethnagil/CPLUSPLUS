/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:18:56 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:20:32 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA Bob("Bob", club);
        Bob.attack();

        club.setType("baseball bat");
        Bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB Jim("Jim");
        Jim.setWeapon(club);
        Jim.attack();

        club.setType("baseball bat");
        Jim.attack();

// to show that we need to redo setWeapon to change the pointer to the new weapon
//        Jim.setWeapon(club);     
//        Jim.attack();
    }
    return 0;
}
