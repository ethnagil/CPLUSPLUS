/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:48:57 by egillesp          #+#    #+#             */
/*   Updated: 2021/02/24 15:49:05 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include <sstream>
 #include <string>
 #include <limits>
 #include <cfloat>

bool floatf(const std::string& s)
{
	return ((s.find_first_not_of("-.0123456789") == s.length()-1
		&& s[s.find_first_not_of("-.0123456789")] == 'f' && s.length() != 1));
}

bool isnumeric(const std::string& s)
{
	if ((s == "-inff") || (s == "+inff") || (s == "nanf") || 
		(s == "-inf") || (s == "+inf") || (s == "nan"))
		return 1;
   	return (!s.empty() && ((floatf(s)) ||
		(s.find_first_not_of("-.0123456789") == std::string::npos)));
}

bool ischar(const std::string& s)
{
   	return ((!isnumeric(s)) && (isprint(s[0])) && (s[1] == 0));
}

int main(int n, char **s)
{	
	if (n == 2)
	{
		// CHECK NO OF DECIMALS AND INITIALISE PRECISION FOR OUTPUT 
		std::string input = s[1];
		int			decimals = 1;
		int pos=static_cast<int>(input.find("."));
		if (pos >= 0)
			decimals = input.length() - pos - 1 - (floatf(s[1])); //f from float shouldn't count as decimal place
		std::cout.precision(decimals);
		std::cout.setf( std::ios::fixed, std::ios::floatfield );

		// TRY FOR CHARACTER OR CHARACTER CONVERSION FROM INT
		try {
			if (ischar(s[1])) // single printable character
				std::cout << "char: '" << static_cast<char>(s[1][0]) << "'\n";
			else if ((isprint(std::stoi(s[1]))) && ((std::stod(s[1]) - std::stoi(s[1])) == 0)) // convert from other types where no decimal
				std::cout << "char: '" << static_cast<char>(std::stoi(s[1])) << "'\n";
			else
				std::cout << "char: Non displayable\n";
		} catch( ... ) {
			std::cerr << "char: impossible\n";
		}
		// TRY FOR INT OR INT CONVERSION FROM CHARACTER, FLOAT or DOUBLE
		try {
			int i = 0;
			if (isnumeric(s[1])){
				i =  std::stoi(s[1]);	
			}else if (ischar(s[1])){
				i = static_cast<int>(s[1][0]);														
			} 
			else
				throw 0;
			std::cout << "int: " << i << '\n';
		} catch( ... ) {
			std::cerr << "int: impossible\n";
		}
		// TRY FOR FLOAT OR FLOAT CONVERSION FROM INT OR DOUBLE
		try {
			float f = 0;
			if 	(ischar(s[1]))
				f = static_cast<float>(s[1][0]);	
			else if (!isnumeric(s[1]))
				throw 0;	
			else
				f =  std::stof(s[1]);			
			std::cout << "float: " << f << "f\n";
		} catch( ... ) {
			std::cerr << "float: impossible\n";
		}
		// TRY FOR DOUBLE OR DOUBLE CONVERSION FROM INT OR FLOAT
		try {
			double d;
			if (ischar(s[1]))
				d = static_cast<double>(s[1][0]);	
			else if (!isnumeric(s[1]))
				throw 0;
			else
				d =  std::stod(s[1]);			
			std::cout << "double: " << d << '\n';
		} catch( ... ) {
			std::cerr << "double: impossible\n";
		}
	}
	else
		std::cout << "Please enter a single C++ literal value: char, int, float, double\n";
	return (0);
}
