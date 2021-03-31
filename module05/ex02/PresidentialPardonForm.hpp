/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:48 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:41:51 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm( const std::string target);
	virtual ~PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm const & cp);
	PresidentialPardonForm& operator=( PresidentialPardonForm const &rhs);
	virtual void	action() const;

private:
	PresidentialPardonForm( void );
	std::string	m_target;
};

#endif

