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

// MIN and MAX
Fixed &min( Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}
const Fixed &min( const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}
Fixed &max( Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}
const Fixed &max( const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

int main(void) { 
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
// Test sequence for all operators 
	bool result;
	Fixed c(43.43f);
	Fixed d(2);

	std::cout << c << '\n';
	std::cout << d << '\n';
	c=c+d;
	std::cout << "a+b " << c << '\n';
	c=c-d;
	std::cout << "a-b " << c << '\n';
	c=c/d;
	std::cout << "a/b " << c << '\n';
	c=c*d;
	std::cout << "a*b " << c << '\n';	

	std::cout << "a " << c << std::endl;
	std::cout << "b " << d << std::endl;
	result = c > d;
	std::cout << "a > b " << result << std::endl;
	result = c < d;
	std::cout << "a < b " << result << std::endl;
	result = c >= d;
	std::cout << "a >= b " << result << std::endl;
	result = c <= d;
	std::cout << "a <= b " << result << std::endl;
	result = c == d;
	std::cout << "a == b " << result << std::endl;
	result = c != d;
	std::cout << "a != b " << result << std::endl;

// recommended test sequence

	std::cout << "prefix ++ \n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "postfix ++ \n";
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << "prefix -- \n";
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << "postfix -- \n";
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;

return 0; }