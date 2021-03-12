/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:14:52 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:15:45 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	std::cout << "\n A new Human is born \n\n";

	Human Murphy;

	std::cout << Murphy.identifier()<< "\n";
	std::cout << Murphy.getBrain().identifier()<< "\n";
	
	return 0;
}
