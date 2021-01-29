#ifndef PHONY_H
#define PHONY_H

#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>
#include <cstring>
#include <stdio.h>

class Entry
{
	public:

	void	ft_print_header(std::string str);
	void	ft_add_entry(int i);
	void	ft_list_entries();
	void	ft_show_entry(int j);

	//void set_num(int digit) { num = digit; }
   //	int get_num() const { return num; }

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
