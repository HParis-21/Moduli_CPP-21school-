#include "span.hpp"

Span::Span() : _size(0) {}

Span::Span( unsigned int size ) : _size(size) {};

Span::~Span() {}

Span::Span( const Span & src ) : _size(src._size) { (*this) = src; }

Span & Span::operator= ( const Span & obj ) {
	if (this != &obj)
	{
		this->_size = obj._size;
		this->storage = obj.storage;
	}
	return (*this);
}

void Span::addNumber( int number ) {
	if (this->storage.size() >= this->_size)
		throw RangeException();
	this->storage.push_back(number);
}

void Span::addNumber( const std::vector<int> & src, int size ) {
	for (int i = 0; i < size && i < (int)src.size(); i++)
		Span::addNumber(src[i]);
}

int Span::longestSpan( void ) {
	if (this->storage.size() < 2)
		throw RangeException();
	std::vector<int> tmp(this->storage);
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}

int Span::shortestSpan( void ) {
	if (this->storage.size() < 2)
		throw RangeException();
	std::vector<int> tmp(this->storage);
	std::sort(tmp.begin(), tmp.end());
	int i, j = -1, size;
	for (i = 0, size = tmp.size() - 1; i < size; i++)
		if (j == -1 || tmp[i + 1] - tmp[i] < j)
			j = tmp[i + 1] - tmp[i];
		return (j);
}

const char* Span::RangeException::what() const throw() {
	return ("RangeException: out of range array");
}