/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:48 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:41:51 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm( const std::string target);
	virtual ~ShrubberyCreationForm( void );
	ShrubberyCreationForm( ShrubberyCreationForm const & cp);
	ShrubberyCreationForm& operator=( ShrubberyCreationForm const &rhs);
	virtual void	action() const;

private:
	ShrubberyCreationForm( void );
	std::string	m_target;
};

#endif
