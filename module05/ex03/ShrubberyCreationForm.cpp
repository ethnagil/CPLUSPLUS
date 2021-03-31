/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:41:59 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/23 15:42:02 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):  
	Form("ShrubberyCreationForm", 145, 137) { m_target = target; }

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & cp): Form(cp)
{
	m_target = cp.m_target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs)
{
	m_target = rhs.m_target;
	m_signed = rhs.m_signed;
	return *this;
}

void	ShrubberyCreationForm::action() const
{
	std::string fout;
	std::string tree =
		"          \\/ |    |/\n"
		"       \\/ / \\||/  /_/___/_\n"
		"        \\/   |/ \\/\n"
		"   _\\__\\_\\   |  /_____/_\n"
		"          \\  | /          /\n"
		" __ _-----`  |{,-----------~\n"
		"           \\ }{\n"
		"            }{{\n"
		"            }}{\n"
		"            {{}\n"
		"      , -=-~{ .-^- _\n"
		"             `}\n"
		"             {\n\n";

	fout.append(m_target);
	fout.append("_shrubbery");
	std::ofstream outfile (fout);
	if (outfile.is_open())
	{
		outfile << tree;
		outfile << tree;
		outfile.close();
	}
	else
		throw std::runtime_error("Could not open file"); 
}
