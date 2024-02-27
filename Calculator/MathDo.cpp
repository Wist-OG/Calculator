#include <iostream>

int GetUserOp();
int GetUserVar();


int MathDo()
{
	int a;
	int x;
	int y;
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
	return -1;
}