#define _USE_MATH_DEFINES 

#include <iostream>
#include <math.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	setlocale(LC_CTYPE, "Russian");

	double a, b, C, S;

	std::cout << "Введите сторону a\n";
	std::cin >> a;
	std::cout << "Введите сторону b\n";
	std::cin >> b;
	std::cout << "Введите угол C\n";
	std::cin >> C;

	S = 0.5 * a * b * sin(C * (M_PI / 180));

	std::cout << S;
	std::cout << std::endl;
	return 0;
}