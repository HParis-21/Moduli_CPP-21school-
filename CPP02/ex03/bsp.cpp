#include "Point.hpp"

bool bsp (Point const a, Point const b, Point const c, Point const point)
{
	Fixed point1 = (a.GetX() - point.GetX()) * (b.GetY() - a.GetY()) - (b.GetX() - a.GetX()) * (a.GetY() - point.GetY());

	Fixed point2 = (b.GetX() - point.GetX()) * (c.GetY() - b.GetY()) - (c.GetX() - b.GetX()) * (b.GetY() - point.GetY());

	Fixed point3 = (c.GetX() - point.GetX()) * (a.GetY() - c.GetY()) - (a.GetX() - c.GetX()) * (c.GetY() - point.GetY());

	return ((point1 > 0 && point2 > 0 && point3 > 0) || (point1 < 0 && point2 < 0 && point3 < 0));
}


//Реализация - считаются произведения (1, 2, 3 - вершины треугольника, 0 - точка):
//(x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
//(x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
//(x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)
//Если они одинакового знака, то точка внутри треугольника, если что-то из этого - ноль, то точка лежит на стороне, иначе точка вне треугольника.
//https://abakbot.ru/online-2/280-pointreug
