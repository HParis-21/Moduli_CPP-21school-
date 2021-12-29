#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	~Point();
	Point(Point const &value);
	Point(const float x, const float y);

	Point &operator=(Point const &value);

	Fixed GetX() const;
	Fixed GetY() const;

};

std::ostream &operator<<(std::ostream &cout, Point const &clas);
bool bsp (Point const a, Point const b, Point const c, Point const point);

#endif //POINT_HPP
