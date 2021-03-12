/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:01:10 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/04 13:02:11 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void 	memoryLeak() {
	std::string*  panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
