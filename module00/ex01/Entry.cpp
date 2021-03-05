/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entry.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:48:37 by egillesp          #+#    #+#             */
/*   Updated: 2021/02/26 16:49:12 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Entry.hpp"

std::string Entry::ft_enter(std::string prompt)
{
	std::string answer;

	std::cout << prompt;
	getline(std::cin, answer);
	return (answer);
}

Entry::Entry (){
}

Entry::~Entry (){
}

void	Entry::NewEntry (int n)
{
	m_index = n;
	m_first_name = ft_enter("Please Enter your name : ");
	m_last_name = ft_enter("Please Enter your last name : ");
	m_nickname = ft_enter("Please Enter your nickname : ");
	m_login = ft_enter("Please Enter your login : ");
	m_postal = ft_enter("Please Enter your postal address : ");
	m_email = ft_enter("Please Enter your e-mail : ");
	m_phone_number = ft_enter("Please Enter your phone number : ");
	m_birthday = ft_enter("Please Enter your birth date : ");
	m_fav_meal = ft_enter("Please Enter your favorite meal : ");
	m_underwear_col = ft_enter("Please Enter your underwear color : ");
	m_darkest_secret = ft_enter("Please Enter your darkest secret : ");
}

void	Entry::ft_print_header(std::string str)
{
	if (str.length() >= 10)
				str[9] = '.';
	std::cout << std::right << std::setfill(' ')
		<< '|' <<std::setw(10) << str.substr(0,10);		
}

void	Entry::ft_list_entry()
{
		std::cout << std::right << std::setfill(' ')
		<<std::setw(10) << this->m_index;
		ft_print_header(this->m_first_name);
		ft_print_header(this->m_last_name);
		ft_print_header(this->m_nickname);
		std::cout << '\n';
}

void	Entry::ft_show_entry()
{
	std::cout << std::left << std::setfill(' ') << '\n'
		<<std::setw(15) << "Index" << ": " << this->m_index << '\n'	
		<<std::setw(15) << "First_Name" << ": " << this->m_first_name  << '\n'	
		<<std::setw(15) << "last_name" << ": " << this->m_last_name  << '\n'	
		<<std::setw(15) << "nickname" << ": " << this->m_nickname  << '\n'	
		<<std::setw(15) << "login" << ": " << this->m_login  << '\n'
		<<std::setw(15) << "postal address"<< ": " << this->m_postal << '\n'
		<<std::setw(15) << "email"<< ": " << this->m_email<< '\n'
		<<std::setw(15) << "phone_number"<< ": " << this->m_phone_number<< '\n'
		<<std::setw(15) << "birthday"<< ": " << this->m_birthday<< '\n'
		<<std::setw(15) << "fav_meal"<< ": " << this->m_fav_meal<< '\n'
		<<std::setw(15) << "underwear_col"<< ": " << this->m_underwear_col<< '\n'
		<<std::setw(15) << "darkest_secret"<< ": " << this->m_darkest_secret<< '\n';
}
