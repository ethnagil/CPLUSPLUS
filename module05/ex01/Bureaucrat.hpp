/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:48 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:41:51 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

//#include "Form.hpp"

# define MAX 1
# define MIN 150

class Form;

class Bureaucrat {

public:
	Bureaucrat(std::string const name, int grade);
	Bureaucrat( Bureaucrat const & cp);
	~Bureaucrat( void );
	Bureaucrat& operator=( Bureaucrat const &cp);
	std::string		getName() const;
	int				getGrade() const;
	void			increment();
	void			decrement();
	void			signForm(Form &tobesigned);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw()
			{
				return ("Glass Ceiling obtained - grade too high");
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw()
			{
				return ("In the pits - grade too low");
			}
	};

private:
	Bureaucrat( void );
	const std::string	m_name;
	int		m_grade;
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &f );

#endif

