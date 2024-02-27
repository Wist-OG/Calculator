#include <iostream>

int GetUserOp()
{
	std::cout << "Write operator, 1 = +, 2 = -, 3 = *, 4 = /" << std::endl;
	int op;
	std::cin >> op;
	return op;
}