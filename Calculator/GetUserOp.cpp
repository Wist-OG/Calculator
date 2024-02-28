#include <iostream>

double GetUserOp()
{
	std::cout << "Write operator, 1 = +, 2 = -, 3 = *, 4 = /, 5 = ^, 6 = root " << std::endl;
	double op;
	std::cin >> op;
	return op;
}