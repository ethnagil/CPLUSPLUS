#include "easyfind.hpp"

int main()
{
	std::set<int> s_int;
	s_int.insert(5);
	s_int.insert(10);
	s_int.insert(15);
	s_int.insert(20);		
	s_int.insert(25);
	s_int.insert(30);	
	try{
		std::cout << easyfind(s_int, 10) << " found" << std::endl;
		std::cout << easyfind(s_int, 30) << " found" << std::endl;
		std::cout << easyfind(s_int, 5) << " found" << std::endl;
		std::cout << easyfind(s_int, 100) << " found" << std::endl;	
	}catch( ... ){
		std::cout << "100 Not Found" << std::endl;
	}
	return 0;
}