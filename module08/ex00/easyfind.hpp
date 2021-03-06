/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:47:44 by egillesp          #+#    #+#             */
/*   Updated: 2021/04/01 14:47:48 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
