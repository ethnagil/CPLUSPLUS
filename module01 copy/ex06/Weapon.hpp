/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:18:43 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:18:46 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>
 
class Weapon
{
    public:
 
    Weapon();
    Weapon(std::string type);
    void setType(std::string type);
    std::string &getType();
 
    private:
 
    std::string m_type;
};
 
#endif
