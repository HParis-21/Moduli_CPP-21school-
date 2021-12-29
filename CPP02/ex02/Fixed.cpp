#include "Fixed.hpp"

Fixed::Fixed() : _point(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int value)
{
	this->_point = value << Fixed::bits;// сдвигаем на 8 бит влево
}

Fixed::Fixed(const float value)
{
	this->_point = roundf(value * (1 << Fixed::bits));
}

int	Fixed::toInt(void) const
{
	return (this->_point >> Fixed::bits);// сдвигаем на 8 бит вправо
}

float Fixed::toFloat(void) const
{
	return ((float)this->_point / (float)(1 << Fixed::bits));
}

int Fixed::getRawBits(void) const
{
	return (this->_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_point = raw;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	this->_point = other.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &other)
{
	Fixed	temp;
	temp.setRawBits(this->getRawBits() + other.getRawBits());
	return (temp);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() - other.getRawBits());
	return (temp);
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed	temp;
	temp.setRawBits(((long)this->getRawBits() * (long)other.getRawBits()) / (1 << Fixed::bits));
	return (temp);
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed	temp;
	temp.setRawBits(((long)this->getRawBits() * (1 << Fixed::bits)) / ((long)other.getRawBits()));
	return (temp);
}

Fixed Fixed::operator++()
{
	this->_point++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->_point--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed &Fixed::min(Fixed &value1, Fixed &value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

Fixed const &Fixed::min(Fixed const &value1, Fixed const &value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}


Fixed &Fixed::max(Fixed &value1, Fixed &value2)
{
	if (value1 < value2)
		return (value2);
	return (value1);
}

Fixed const &Fixed::max(Fixed const &value1, Fixed const &value2)
{
	if (value1 < value2)
		return (value2);
	return (value1);
}








std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}




