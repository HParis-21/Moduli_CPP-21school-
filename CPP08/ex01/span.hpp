#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
#include <vector>

class Span {
private:
	std::vector<int> storage;
	unsigned int _size;
public:
	Span();
	virtual ~Span();
	Span(unsigned int size );
	Span(const Span & src );
	Span & operator= ( const Span & obj );

	void addNumber(int number );
	void addNumber(const std::vector<int> & src , int size );
	int shortestSpan(void );
	int longestSpan(void );

	class RangeException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif //SPAN_HPP
