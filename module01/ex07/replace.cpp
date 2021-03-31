/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:23:41 by egillesp          #+#    #+#             */
/*   Updated: 2021/03/08 16:23:45 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>  

void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
    size_t pos = data.find(toSearch);
    while( pos != std::string::npos)
    {
        data.replace(pos, toSearch.size(), replaceStr);
        pos =data.find(toSearch, pos + replaceStr.size());
    }
}

int	main(int n, char *s[])
{
	std::string s1;
	std::string s2;
	std::string fout;
	std::string line;

	if ((n > 4) || (n < 4))
	{
		std::cout << "\n Please enter file-name, string1, string2 \n";
		return (0);
	}
	s1.append(s[2]);
	s2.append(s[3]);
	fout.append(s[1]);
	fout.append(".replace");
	std::ifstream myfile (s[1]);
	if (myfile.is_open())
	{
		std::ofstream outfile (fout);
		if (outfile.is_open()) {
			while (std::getline(myfile, line)){
				findAndReplaceAll(line, s1, s2);		
				outfile << line << '\n';
			}
			outfile.close();
		}
		else std::cout << "Unable to create file " << fout << '\n';
		myfile.close();
	}
	else std::cout << "Unable to open file " << s[1] << '\n';

	return (1);
}
