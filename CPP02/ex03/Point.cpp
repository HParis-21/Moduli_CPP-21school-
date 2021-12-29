#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point(Point const &value)
{
	*this = value;
}

Point::Point(const float x, const float y)
{
	const_cast<Fixed&>(this->x) = Fixed(x);
	const_cast<Fixed&>(this->y) = Fixed(y);
}

Point &Point::operator=(Point const &value)
{
	const_cast<Fixed&>(x) = value.x;
	const_cast<Fixed&>(y) = value.y;
	return (*this);
}

Fixed Point::GetX() const
{
	return (Fixed(x));
}
Fixed Point::GetY() const
{
	return (Fixed(y));
}

std::ostream &operator<<(std::ostream &cout, Point const &clas)
{
	cout << clas.GetX() << ", " << clas.GetY();
	return cout;
}