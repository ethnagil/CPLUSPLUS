/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:59:48 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:59:51 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>	

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr_str;
	std::string &ref = str;

	ptr_str = &str;

	std::cout << "This is the pointer " << *ptr_str << '\n';
	std::cout << "This is the reference " << ref << '\n';
	return 0;
}
