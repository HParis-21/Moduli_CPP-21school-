#include "Point.hpp"


void ch_bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "A (x = " << a.GetX() << ", y = " << a.GetY() << ")" << std::endl;
	std::cout << "B (x = " << b.GetX() << ", y = " << b.GetY() << ")" << std::endl;
	std::cout << "C (x = " << c.GetX() << ", y = " << c.GetY() << ")" << std::endl;
	std::cout << "P (x = " << point.GetX() << ", y = " << point.GetY() << ")\t" ;
	if (bsp(a, b, c, point))
		std::cout << "inside" << std::endl << std::endl;
	else
		std::cout << "outside" << std::endl << std::endl;

}

int main(void)
{
	Point a(4, -1);
	Point b(6, 4);
	Point c(12, 2);

	Point p1(7, 2);
	Point p2(-3, 3);
	Point p3(0, 0);
	Point p4(5.0, 1.0);

	ch_bsp(a, b, c, p1);
	ch_bsp(a, b, c, p2);
	ch_bsp(a, b, c, p3);
	ch_bsp(a, b, c, p4);

	return 0;
}