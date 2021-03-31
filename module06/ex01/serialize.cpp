/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:47:22 by egillesp          #+#    #+#             */
/*   Updated: 2021/02/26 16:47:52 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include <iostream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

std::mt19937	f_rand(time(0));
std::string		rand_elem = "abcdefghijklmnopqrstuvwxyz0123456789";

void		*serialize( void )
{
	unsigned long   i = 0;
	char	*n = new char[sizeof(int) + sizeof(char) * 10 * 2 + 1];

	for (; i < 10; i++)
		n[i] = rand_elem[f_rand() % rand_elem.length()];
	for (; i < sizeof(int) + 10; i++)
		n[i] = f_rand() % INT_MAX;
	for (; i < 10 + 10 + sizeof(int); i++)
		n[i] = rand_elem[f_rand() % rand_elem.length()];
	n[i] = 0;	
	return static_cast<void *>(n);
}

Data		*deserialize( void *raw)
{
	unsigned long i = 0;
	std::string	s1 = "0000000000\0";
	std::string	s2 = "0000000000\0";
	int			n = 0;
	int			a = 0;
	char *s = reinterpret_cast<char *>(raw);

	Data		*d = new Data;
	for (; i < 10; i++) 
		s1[i] = s[i];
	n = *reinterpret_cast<int *>(&s[i]);
	i += sizeof(int);
	for (; i < 10 + 10 + sizeof(int); i++) 
		s2[a++] = s[i];
	d->s1 = s1;
	d->s2 = s2;
	d->n = n;
	return (d);
}

int main()
{
	void *raw = serialize();
	std::cout << "\nRaw Data as returned from serialize() \n";
	std::cout << static_cast<const char *>(raw) << '\n';
	Data *test1 = deserialize(raw);
	std::cout << "\nStructured data returned from deserialize(raw) \n"; 
	std::cout << test1->s1 << '\n';
	std::cout << test1->n << '\n';
	std::cout << test1->s2 << '\n';
	std::cout << '\n';

	std::cout << "\nStructured data returned from deserialize(serialize()) \n";
	void *raw2 = serialize();
	Data *test2 = deserialize(raw2);
	std::cout << test2->s1 << '\n';
	std::cout << test2->n << '\n';
	std::cout << test2->s2 << '\n';
	std::cout << '\n';
	std::cout << "\nStructured data returned from deserialize(serialize()) \n";

	void *raw3 = serialize();	
	Data *test3 = deserialize(raw3);
	std::cout << test3->s1 << '\n';
	std::cout << test3->n << '\n';
	std::cout << test3->s2 << '\n';
	std::cout << '\n';

	delete static_cast<const char *>(raw);
	delete static_cast<const char *>(raw2);
	delete static_cast<const char *>(raw3);
	delete test1;
	delete test2;
	delete test3;

	return (0);
}
