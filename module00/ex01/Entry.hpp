/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entry.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:49:27 by egillesp          #+#    #+#             */
/*   Updated: 2021/02/26 16:49:59 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTRY_HPP
#define ENTRY_HPP

#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>		// substr()
#include <limits>    	// numeric limits

class Entry
{ 
	public:

	Entry();
	~Entry();
	void		NewEntry (int n);
	std::string ft_enter(std::string prompt);
	void		ft_print_header(std::string str);
	void		ft_list_entry();
	void		ft_show_entry();

	private:

	int	m_index;
	std::string m_first_name;
	std::string m_last_name;
	std::string m_nickname;
	std::string m_login;
	std::string m_postal;
	std::string m_email;
	std::string m_phone_number;
	std::string m_birthday;
	std::string m_fav_meal;
	std::string m_underwear_col;
	std::string m_darkest_secret;
};

#endif
