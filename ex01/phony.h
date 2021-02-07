#ifndef PHONY_H
#define PHONY_H

#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>
#include <limits>    
#include <cstring>
#include <stdio.h>

class Entry
{ 
	public:

	Entry();
	Entry (int n);
	std::string ft_enter(std::string prompt);
	void		ft_print_header(std::string str);
	// void		ft_add_entry();
	void		ft_list_entry();
	void		ft_show_entry();

	//void set_num(int digit) { num = digit; }
   //	int get_num() const { return num; }

	private:

	// static int _nbrows;
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
