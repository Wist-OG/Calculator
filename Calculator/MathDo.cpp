#include <iostream>
#include <cmath>

double GetUserOpMath();
double GetUserVar();


double MathDo()
{
	double a;
	double x;
	double y;
	x = GetUserVar();
	a = GetUserOpMath();
	y = GetUserVar();
	
	if (a == 1)
		return x + y;
	if (a == 2)
		return x - y;
	if (a == 3)
		return x * y;
	if (a == 4)
		return x / y;
	if (a == 5)
		return pow(x, y);
	if (a == 6)
		return pow(x, 0.5);

	return -1;
}