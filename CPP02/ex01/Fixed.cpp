#include "Fixed.hpp"

Fixed::Fixed() : _point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_point = value << Fixed::bits;// сдвигаем на 8 бит влево
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
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

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_point = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_point = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}



