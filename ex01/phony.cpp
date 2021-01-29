// setiosflags example
#include "phony.h"

void	ft_print_header(std::string str)
{
	if (str.length() >= 10)
				str[9] = '.';
	printf("|%10.10s", str.c_str());
}

void	ft_add_entry(Entry row, int i)
{
//				std::cout << "P";
				std::cout << "Please Enter your name :";
				getline(std::cin, row.m_first_name);
					std::cout << ": your last name :";
				getline(std::cin, row.m_last_name);
					std::cout << ": your nickname :";
				getline(std::cin, row.m_nickname);
					std::cout << ": your login :";
				getline(std::cin, row.m_login);
					std::cout << ": your postal address:";
				getline(std::cin, row.m_postal);
					std::cout << ": your email :";
				getline(std::cin, row.m_email);
					std::cout << ": your phone_number :";
				getline(std::cin, row.m_phone_number);
					std::cout << ": your birth date :";
				getline(std::cin, row.m_birthday);
					std::cout << ": your favorite meal :";
				getline(std::cin, row.m_fav_meal);
					std::cout << ": your underwear_col :";
				getline(std::cin, row.m_underwear_col);
					std::cout << ": your darkest_secret :";
				getline(std::cin, row.m_darkest_secret);
				row.m_index = i + 1;
}

void	ft_list_entries()
{
	int j;

			j = 0;
			while (j < 8)
			{
				printf("%10.d", rows[j].m_index);
				ft_print_header(rows[j].m_first_name);
				ft_print_header(rows[j].m_last_name);
				ft_print_header(rows[j].m_nickname);
				printf("\n");
				j++;
			}
}

void	ft_show_entry(int j)
{
	printf("%-15s: %d\n", "Index", rows[j].m_index);
	printf("%-15s: %s\n", "First_Name", rows[j].m_first_name.c_str());
	printf("%-15s: %s\n", "last_name", rows[j].m_last_name.c_str());
	printf("%-15s: %s\n", "nickname", rows[j].m_nickname.c_str());
	printf("%-15s: %s\n", "login", rows[j].m_login.c_str());	
	printf("%-15s: %s\n", "postal address", rows[j].m_postal.c_str());		
	printf("%-15s: %s\n", "email", rows[j].m_email.c_str());
	printf("%-15s: %s\n", "phone_number", rows[j].m_phone_number.c_str());
	printf("%-15s: %s\n", "birthday", rows[j-].m_birthday.c_str());
	printf("%-15s: %s\n", "fav_meal", rows[j].m_fav_meal.c_str());
	printf("%-15s: %s\n", "underwear_col", rows[j].m_underwear_col.c_str());	
	printf("%-15s: %s\n", "darkest_secret", rows[j].m_darkest_secret.c_str());	
}
