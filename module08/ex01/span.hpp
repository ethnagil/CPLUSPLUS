#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <iostream>
# include <vector>

class Span {

public:

	Span( unsigned int N );

	Span( Span const & src );

	Span	&operator=( Span const & rhs);

	~Span( void );

	class SpanImpossibleException : public std::exception {
	public:
		virtual const char* what() const throw() {
				return ("No Span Obtained - no numbers, only one number ....");
		}
	};

	unsigned int	size( void ) const { return m_size; }

	void	addNumber(int n);
	long	shortestSpan() const;
	long	longestSpan() const;


private:
	Span( void ) {};
	unsigned int		m_size;
	std::vector<int>	m_span;
};


#endif
