#include <iostream>

double GetUserOpMath();
double GetUserVar();
double MathDo();
double Geometry();
double GetUserOpGeo();

int main()
{
	std::cout << "Write 0  if you need help with math or 1 if you need help with geometry " << std::endl;
	int variant;
	std::cin >> variant;
	if (variant == 0)
	    std::cout << "Result is: " << MathDo() << std::endl;
	if (variant == 1)
		std::cout << "Result is " << Geometry() << std::endl;
}
