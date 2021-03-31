#include "Array.hpp"

int	main(void)
{
	std::cout << "\n _____Integers____ \n";
	try{
		Array<int> arrayofint(10);
		unsigned int size = arrayofint.size();

		std::cout << "arrayofint size: " << size << std::endl;
		for (unsigned int i = 0; i < size; i++)
			arrayofint[i] = static_cast<int>(size) - static_cast<int>(i);
		for (unsigned int i = 0; i < size; i++)
			std::cout << "arrayofint[" << i << "] = " << arrayofint[i] << std::endl;
		arrayofint[11] = 11;
	}
	catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
	}
	std::cout << "\n _____Empty Array____ \n";
	{
		Array<int> emptyarray;
		std::cout << "\n Empty array size: " << emptyarray.size() << std::endl;
	}
	std::cout << "\n _____Strings & pointers____ \n";
	try{
		Array<std::string> strings(3);
		unsigned int size = strings.size();
		std::cout << "\nPrint pointers for initialised elements \n";
		for (unsigned int i = 0; i < size; i++)
			std::cout << "pointer strings[" << i << "] = " << &strings[i] << std::endl;		

		std::cout << "Nb of strings: " << size << std::endl;
		strings[0] = "Hello there ";
		strings[1] = "Dolly ";
		strings[2] = "Well hello Dolly ";
		for (unsigned int i = 0; i < size; i++)
			std::cout << "strings[" << i << "] = " << strings[i] << " Pointer : " <<  &strings[i] << std::endl;
		strings[3] = "No Way!!";
	}
	catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
	return 0;
}