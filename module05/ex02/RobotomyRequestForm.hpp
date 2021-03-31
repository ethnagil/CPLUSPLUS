/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:48 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:41:51 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm( const std::string target);
	virtual ~RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const & cp);
	RobotomyRequestForm& operator=( RobotomyRequestForm const &rhs);
	virtual void	action() const;

private:
	RobotomyRequestForm( void );
	std::string	m_target;
};

#endif

