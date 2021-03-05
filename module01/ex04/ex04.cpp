#include <iostream>     // std::cout, std::hex, std::endl
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