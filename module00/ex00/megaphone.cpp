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
#include <cctype>

int main(int c, char **s)
{
	int i = 1;
	int j;

	while (i < c)
	{
		j = 0;
		while (j < (int)strlen(s[i]))
		{
			s[i][j] = toupper(s[i][j]);
			j++;
		}
		std::cout << s[i];
		i++;
	}
	if (c == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
