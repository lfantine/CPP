#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <tgmath.h>

float	calcAngle(Point vec1, Point vec2)
{
	float scal = (vec1.getX().toFloat() * vec2.getX().toFloat()) + (vec1.getY().toFloat() * vec2.getY().toFloat());
	float scal_abs_v1 = std::sqrtf(std::powf(vec1.getX().toFloat(), 2) + std::powf(vec1.getY().toFloat(), 2));
	float scal_abs_v2 = std::sqrtf(std::powf(vec2.getX().toFloat(), 2) + std::powf(vec2.getY().toFloat(), 2));
	return (std::acosf(scal/(scal_abs_v1 * scal_abs_v2)));
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	float pi = 3.1415926535897f;
	Point pa(a.getX().toFloat() - p.getX().toFloat(),a.getY().toFloat() - p.getY().toFloat());
	Point pb(b.getX().toFloat() - p.getX().toFloat(),b.getY().toFloat() - p.getY().toFloat());
	Point pc(c.getX().toFloat() - p.getX().toFloat(),c.getY().toFloat() - p.getY().toFloat());

	float bpa = calcAngle(pa, pb) * (180/pi);
	float bpc = calcAngle(pb, pc) * (180/pi);
	float cpa = calcAngle(pc, pa) * (180/pi);
	//std::cout << " bpa = " << bpa << " bpc = " << bpc << " cpa = " << cpa << std::endl;
	if (bpa + bpc + cpa < 360)
		return false;
	else
		return true;
}

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cerr << "Usage : ./demo" << std::endl;
		return (1);
	}
	Point a(1, 0);
	Point b(2, 2);
	Point c(3, 0);
	Point p(1, 0);
	if (bsp(a, b ,c, p))
		std::cout << "le Point est dans le triangle" << std::endl;
	else
		std::cout << "Le point est en dehors du triangle" << std::endl;
	
	return 0;
	(void)argc;
	(void)argv;
}