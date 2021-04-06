/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:48:26 by egillesp          #+#    #+#             */
/*   Updated: 2021/04/01 14:48:29 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
int f()
{ 
    static int i = 1;
    return i++;
}

int main()
{
	std::cout << "\nRECOMMENDED TEST SEQUENCE \n";
	try{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}catch (Span::SpanImpossibleException  & e ) {
			std::cout << e.what() << std::endl;
	}catch (std::out_of_range  & e ) {
			std::cout << e.what() << std::endl;
	}
	std::cout << "\nTEST SEQUENCE - min number repeated (shortest span 0) \n";
	try{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(3);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}catch (Span::SpanImpossibleException  & e ) {
			std::cout << e.what() << std::endl;
	}catch (std::out_of_range  & e ) {
			std::cout << e.what() << std::endl;
	}
	std::cout << "\nTEST SEQUENCE - Last number added out of range \n";
	try{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(99);		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}catch (Span::SpanImpossibleException  & e ) {
			std::cout << e.what() << std::endl;
	}catch (std::out_of_range  & e ) {
			std::cout << e.what() << std::endl;
	}
	std::cout << "\nTEST SEQUENCE - one number so SPAN impossible \n";
		try{
		Span sp = Span(5);
		sp.addNumber(5);	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}catch (Span::SpanImpossibleException  & e ) {
			std::cout << e.what() << std::endl;
	}catch (std::out_of_range  & e ) {
			std::cout << e.what() << std::endl;
	}
	std::cout << "\nTEST SEQUENCE - pass a populated vector. \n";
	try{	
		// CREATE AND POPULATE A RANGE OF ITERATORS
		Span sp = Span(100);
		std::vector<int> v(100);

		    std::generate(v.begin(), v.end(), f);
    		std::cout << "v: ";
    		for (unsigned long iv=0; (iv<v.size()); iv++) {
        		std::cout << pow(v[iv],2) << " ";
    		}
			std::cout << std::endl;

		sp.addNumber(v);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}catch (Span::SpanImpossibleException  & e ) {
		std::cout << e.what() << std::endl;
	}catch (std::out_of_range  & e ) {
		std::cout << e.what() << std::endl;
	}
}
