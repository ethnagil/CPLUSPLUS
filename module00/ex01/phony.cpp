/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phony.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:47:22 by egillesp          #+#    #+#             */
/*   Updated: 2021/02/26 16:47:52 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Entry.hpp"

int main () 
{
	Entry rows[8];
	std::string cmd;
	int i;
	int j;
	std::string k;

	cmd = "START";
	i = 0;
	while ((cmd != "EXIT") && (cmd != "E"))
	{
  		std::cout << '\n' << "Enter your command: (A)DD, (S)EARCH, or (E)XIT : ";
  		getline(std::cin, cmd);
		if ((cmd == "ADD")  || (cmd == "A"))
		{
			if (i == 8)
			{ 
				std::cout << "Your directory is full, start a new directory and loose existing entries y/n ? ";
  				getline(std::cin, k);
				if (k == "y")
					i = 0;
			}
			if (i < 8)
			{
				rows[i].Entry::NewEntry(i + 1);
				i++;
			}
		}
		while ((cmd == "SEARCH") || (cmd == "S"))
		{
			std::cout << std::setfill(' ') << '\n'
			<< std::right <<std::setw(10) << "Index" 
			<< std::right <<std::setw(10) << "|First Name" 
			<< std::right <<std::setw(10) << "| Last Name" 
			<< std::right <<std::setw(10) << std::setfill(' ') << "|  Nickname" 
			<< '\n';
			std::cout <<std::setw(43) << std::setfill('-') << "" << '\n';
			for (j = 0; j < i; j++) { 
				rows[j].Entry::ft_list_entry();
			}
			std::cout << '\n' << "Enter the index for the required entry : ";
			std::cin >> j;
			if ((j >= 1) && (j <= i))
			{
				rows[j - 1].Entry::ft_show_entry();				
				cmd = "R";
			}
			else
			{
			  	printf("\nInvalid Entry. Please enter an index from the list.\n");
			}
			std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
  return 0;
}
