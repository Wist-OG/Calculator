#include <iostream>

double GetUserOpGeo()
{
	std::cout <<  "Write action, 1 = area of a square, 2 = area of a rectangle, 3 = perimeter of a rectangle, 4 = perimeter of a square, 5 = area of a triangle , 6 = perimeter of a triangle " << std::endl;
	double opg;
	std::cin >> opg;
	return opg;
}