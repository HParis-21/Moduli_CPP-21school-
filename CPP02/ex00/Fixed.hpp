#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class Fixed
{
private:

	int				_point;
	static const int	bits = 8;

public:

	Fixed();
	~Fixed();
	Fixed(Fixed const &other);// конструктор копирования

	Fixed &operator=(Fixed const &other);// перегрузка оператора присваивания =
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //FIXED_H
