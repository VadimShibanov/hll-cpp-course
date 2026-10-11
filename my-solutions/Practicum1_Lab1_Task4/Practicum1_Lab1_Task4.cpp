#include <iostream>
#include <math.h>
#include <windows.h>

const double SPEED_OF_LIGHT = 299792458.0;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	double m, v, E;

	std::cout << "Введите m(кг)\n";
	std::cin >> m;
	std::cout << "Введите v(м/c)\n";
	std::cin >> v;

	E = m * pow(SPEED_OF_LIGHT, 2) / sqrt(1 - pow(v / SPEED_OF_LIGHT, 2));

	std::cout << "Полная энергия релятивисткой частицы = " << E << " Дж";
	std::cout << std::endl;

	return 0;
}