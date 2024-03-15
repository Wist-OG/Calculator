#include <iostream>
#include <cmath>

double GetUserOpGeo();
double GetUserVar();



double Geometry()
{
	double a;
	double x;
	double y;
	double z;
	x = GetUserVar();
	a = GetUserOpGeo();
	if (a == 1)
		return x * x;
	if (a == 4)
		return x * 4;
	y = GetUserVar();

	if (a == 2)
		return x * y;
	if (a == 3)
		return (x + y) * 2;
	z = GetUserVar();
	
	if (a == 6)
		return x + y + z;
	if (a == 5)
	{
		double p; // используем формулу Герона
		p = (x + y + z) / 2; // берем полуприметр, также используем double, чтобы не было потерь в точности расчётов
		return pow(p * (p - x) * (p - y) * (p - z), 0.5);
	}
	
	return -1;
} 