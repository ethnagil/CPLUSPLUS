/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:48:57 by egillesp          #+#    #+#             */
/*   Updated: 2021/02/24 15:49:05 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int c, char **s)
{
	int i;

	i = 1;
	while (i < c)
	{
		cout << s[i];
		i++;	
	}
	if (c == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << "\n";
	return (0);
}
