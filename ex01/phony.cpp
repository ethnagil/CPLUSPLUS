#include "phony.h"

std::string Entry::ft_enter(std::string prompt)
{
	std::string answer;

	std::cout << prompt;
	getline(std::cin, answer);
	return (answer);
}

Entry::Entry (){
}

Entry::Entry (int n)
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
	printf("|%-10.10s", str.c_str());
}

void	Entry::ft_list_entry()
{
		printf("%10.d", this->m_index);
		ft_print_header(this->m_first_name);
		ft_print_header(this->m_last_name);
		ft_print_header(this->m_nickname);
		printf("\n");
}

void	Entry::ft_show_entry()
{
	printf("%-15s: %d\n", "Index", this->m_index);
	printf("%-15s: %s\n", "First_Name", this->m_first_name.c_str());
	printf("%-15s: %s\n", "last_name", this->m_last_name.c_str());
	printf("%-15s: %s\n", "nickname", this->m_nickname.c_str());
	printf("%-15s: %s\n", "login", this->m_login.c_str());	
	printf("%-15s: %s\n", "postal address", this->m_postal.c_str());		
	printf("%-15s: %s\n", "email", this->m_email.c_str());
	printf("%-15s: %s\n", "phone_number", this->m_phone_number.c_str());
	printf("%-15s: %s\n", "birthday", this->m_birthday.c_str());
	printf("%-15s: %s\n", "fav_meal", this->m_fav_meal.c_str());
	printf("%-15s: %s\n", "underwear_col", this->m_underwear_col.c_str());	
	printf("%-15s: %s\n", "darkest_secret", this->m_darkest_secret.c_str());	
}
