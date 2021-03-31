#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include<iostream>
# include<algorithm>
# include <exception>
# include <set>

template < typename T >
int easyfind(T &one, int two)
{
	typename T::iterator it = std::find(one.begin(), one.end(), two);

	if (it == one.end())
		throw std::exception();	

	return *it;
}

#endif