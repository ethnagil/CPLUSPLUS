/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:49:39 by egillesp          #+#    #+#             */
/*   Updated: 2021/04/01 14:49:41 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template<class T>
class MutantStack : public std::stack<T>{

	public:
		MutantStack<T>(void): std::stack<T>() {}
		virtual ~MutantStack<T>(void) {}

		MutantStack(MutantStack const &rhs): std::stack<T>(rhs) {}

		// use the base class operator=
		using std::stack<T>::operator=;

		// In the stack class is a container type, which has a list of member types. iterator is one of them.
		// create a new type iterator based on this iterator

		typedef typename std::stack<T>::container_type::iterator iterator;

		// c is the private container variable in class std::stack, so we can retrieve the data
		iterator begin(void) { return std::begin(std::stack<T>::c); }
		iterator end(void) { return std::end(std::stack<T>::c); }

};

#endif
