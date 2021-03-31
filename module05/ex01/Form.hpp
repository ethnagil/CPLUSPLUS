/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:48 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:41:51 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"
# define MAX 1
# define MIN 150

class Form {

public:
	Form( const std::string name, int grade_sign, int grade_exec);
	~Form( void );
	Form( Form const & cp);
	Form& operator=( Form const &rhs);

	std::string		getName() const;
	int				getGradeSign() const;
	int				getGradeExec() const;
	void			besigned( Bureaucrat &signee);
	int				getStatus() const;
	void			sign();

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high - out of scope");
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low - out of scope");
			}
	};

private:
	Form( void );

	const std::string	m_name;
	bool				m_signed;
	const int			m_grade_sign;
	const int			m_grade_exec;
};

std::ostream	&operator<<( std::ostream &o, Form const &f );

#endif

