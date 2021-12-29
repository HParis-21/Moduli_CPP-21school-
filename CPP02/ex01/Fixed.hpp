#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:

	int					_point;
	static const int	bits = 8;

public:

	Fixed();
	~Fixed();
	Fixed(Fixed const &other);// конструктор копирования
	Fixed(const int value);
	Fixed(const float value);

	Fixed &operator=(Fixed const &other);// перегрузка оператора присваивания =
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &other);

#endif //FIXED_H
