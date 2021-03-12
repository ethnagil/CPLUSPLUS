/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:27:07 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 15:27:18 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>     // std::cout, std::hex, std::endl
#include <string>		// substr()


class Pony
{ 
	public:

	Pony();
	Pony (std::string name, std::string action) : m_name(name), m_action(action) { };
	~Pony ();

	void	Action();
	void	Alive();

	private:

	std::string m_name;
	std::string m_action;
};

#endif
