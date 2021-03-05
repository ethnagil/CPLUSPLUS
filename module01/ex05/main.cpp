#include "Human.hpp"

int main()
{
	std::cout << "\n A new Human is born \n\n";
	/*
	Brain brainy;

	std::cout << brainy.identifier() << '\n';
	*/
	Human Murphy;

	std::cout << Murphy.identifier()<< "\n";
	std::cout << Murphy.getBrain().identifier()<< "\n";
	

//	while (2) ;

	return 0;
}