#include <iostream>
#include <cmath>

double GetUserOp();
double GetUserVar();


double MathDo()
{
	double a;
	double x;
	double y;
	x = GetUserVar();
	a = GetUserOp();
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

	return -1;
}