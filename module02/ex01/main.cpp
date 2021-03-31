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

#include <iostream>
#include "Fixed.hpp"
int main(void) 
{
	Fixed a;
	Fixed const b(10); 
	Fixed const c(42.42f); 
	Fixed const d(b);

	a = Fixed(1234.4321f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "Raw a is " << a.getRawBits() << " float: " << a << std::endl;
	std::cout << "Raw b is " << b.getRawBits() << " float: " << b << std::endl;
	std::cout << "Raw c is " << c.getRawBits() << " float: " << c << std::endl;
	std::cout << "Raw d is " << d.getRawBits() << " float: " << d << std::endl;

	return 0; 
}