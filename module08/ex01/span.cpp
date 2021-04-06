/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:48:40 by egillesp          #+#    #+#             */
/*   Updated: 2021/04/01 14:48:43 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

Span::Span( unsigned int N ): m_size(N) {
		m_span.reserve(N);
}

Span::~Span( void ){ }

Span::Span( Span const &rhs){ *this = rhs; }

Span &Span::operator=( Span const &rhs){
		m_size = rhs.m_size;
		for (unsigned int i = 0; i < m_size; i++)
			m_span[i] = rhs.m_span[i];
		return *this;
}

void			Span::addNumber(int n){
	if (m_span.size() >= m_size)
		throw std::out_of_range("Index out of Range !!");
	else
		m_span.push_back(n);
}

void			Span::addNumber(std::vector<int> v){
	for (unsigned long iv=0; (iv<v.size()); iv++) {
		if (m_span.size() >= m_size)
			throw std::out_of_range("Index out of Range !!");
		else {
        	m_span.push_back(pow(v[iv],2));
		}
    }
}

long	Span::shortestSpan() const{
	const long min = *std::min_element(m_span.begin(), m_span.end());
	long min2 = *std::max_element(m_span.begin(), m_span.end());
	long shortspan = min2 - min;

	if (m_span.size() <= 1) //0 or 1 element, span impossible
		throw Span::SpanImpossibleException();
	if (std::count(m_span.begin(), m_span.end(), min) > 1) // two times the same min
		return 0;
	else for(unsigned int i=0; i<m_span.size(); i++){ // 2 lowest numbers give the shortest span
			if ((m_span[i] - min < shortspan) && (m_span[i] != min)){
				min2 = m_span[i];
				shortspan = min2 - min;
			}
	}
	return shortspan;
}

long		Span::longestSpan() const{
	if (m_span.size() <= 1)
		throw Span::SpanImpossibleException();
	return(static_cast<long>(*max_element(m_span.begin(), m_span.end())-
			*min_element(m_span.begin(), m_span.end())));
}
