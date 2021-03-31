#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <class T>
class Array {

public:
	Array( void ) : m_size(0), m_array(NULL)  {}
	Array( unsigned int n ): m_size(n), m_array(new T[n]) {}
	Array( Array const & src ) { *this = src; }

	Array	&operator=( Array const & rhs) {
		m_size = rhs.m_size;
		delete m_array;
		m_array = new T [rhs.m_size];
		for (int i = 0; i < m_size; i++)
			m_array[i] = rhs.m_array[i];
		return *this;
	}

	~Array( void ) { delete [] m_array; }

	T	&operator[](unsigned int i) {
		if (i >= m_size)
			throw std::out_of_range("Index out of Range !!");
		return (m_array[i]);
	}

	unsigned int	size( void ) const { return m_size; }

private:
	unsigned int	m_size;
	T *				m_array;
};


#endif