#include <iostream>
#include <math.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	double a, b, x, y;

	std::cout << "a>";
	std::cin >> a;
	std::cout << "b>";
	std::cin >> b;
	std::cout << "x>";
	std::cin >> x;
	std::cout << "y>";
	std::cin >> y;

	if (x < a * b) {
		std::cout << "Верхняя формула" << std::endl;
		y = sqrt(pow(tan(log(a * b * b)), 2) + a * a * pow(sin(exp(2 * x + 5)), 2));
	}
	else {
		std::cout << "Нижняя формула" << std::endl;
		y = pow(tan(log(fabs(a * x * x + pow(b, 4)))), 2) + atan(a + b);

	}
	std::cout << "y = " << y << std::endl;

	return 0;
}