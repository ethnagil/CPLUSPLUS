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

#include "Fixed.hpp"

int main(void) { 

// Test sequence for all operators 
	{
	bool result;
	Fixed c(43.43f);
	Fixed d(2);

	std::cout << "\n_______mathematical operators________\n";
	std::cout << "c " << c << '\n';
	std::cout << "d " << d << '\n';
	c=c+d;
	std::cout << "c+d " << c << '\n';
	c=c-d;
	std::cout << "c-d " << c << '\n';
	c=c/d;
	std::cout << "c/d " << c << '\n';
	c=c*d;
	std::cout << "c*d " << c << '\n';	
	std::cout << "\n_______comparaison operators________\n";
	std::cout << "c " << c << std::endl;
	std::cout << "d " << d << std::endl;
	result = c > d;
	std::cout  << std::boolalpha 
			   << "c > d " << result << std::endl;
	result = c < d;
	std::cout << "c < d " << result << std::endl;
	result = c >= d;
	std::cout << "c >= d " << result << std::endl;
	result = c <= d;
	std::cout << "c <= d " << result << std::endl;
	result = c == d;
	std::cout << "c == d " << result << std::endl;
	result = c != d;
	std::cout << "c != d " << result << std::endl;
	}
	{
	std::cout << "\n_______explained complete test sequence________\n";
	
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "\n__  prefix ++  __ \n";
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a " << a << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "++a " << ++a << std::endl;
	std::cout << "\n__  postfix ++  __ \n";
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a " << a << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a++ "<< a++ << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a after "<< a << std::endl;
	std::cout << "\n__  prefix --  __ \n";
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a " << a << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "--a "  << --a << std::endl;
	std::cout << "\n__  postfix --  __ \n";
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a " << a << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a-- " << a-- << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a after " << a << std::endl;
	std::cout << "\n__  max/min  __ \n";
	a = 15;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "a " << a << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "const b " << b << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "max a or b "<< Fixed::max(a, b) << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "min a or b "<< Fixed::min(a, b) << std::endl;
	Fixed x(9.99f);
	Fixed y = 10;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "x " << x << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "y " << y << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "max x or y "<< Fixed::max(x, y) << std::endl;
	std::cout << std::setw(12) << std::setfill(' ') << std::left << "min x or y "<< Fixed::min(x, y) << std::endl;
	}
	{
	std::cout << "\n_______recommended test sequence________\n";
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	}
return 0; }