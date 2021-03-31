#include "iter.hpp"

int main()
{
	int				arr_int[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::string		arr_str[] = {"Hello ", "Dolly, ", "well ", "Hello ", "Dolly"};

	float			arr_flo[] = {5.9f, 5.2563f, 5.59f};

	std::cout << "\n _____Integers____ \n";
	iter(arr_int, 10, print);
	std::cout << "\n _____Strings____ \n";
	iter(arr_str, 5, print);
	std::cout << "\n _____Floats____ \n";
	iter(arr_flo, 3, print);
}