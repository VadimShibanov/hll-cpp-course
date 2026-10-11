#define _USE_MATH_DEFINES

#include <iostream>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	double R, S;

	std::cout << "Введите радиус R\n";
	std::cin >> R;

	S = 6 * pow(R, 2) / 2 * sin(2 * M_PI / 6);

	std::cout << "Площадь правильного шестиугольника = " << S;
	std::cout << std::endl;

	return 0;
}