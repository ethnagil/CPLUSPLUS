#include <iostream>

template<class T>
void		iter(T const *array, int len, void (*f)(T))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

template<class T>
void		print(T const a)
{
	std::cout << a << std::endl;
}

