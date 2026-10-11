#include <iostream>
#include <Windows.h>
#include <math.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");
	double a, V;

	std::cout << "Введите а\n";
	std::cin >> a;

	V = pow(a, 3) * sqrt(2) / 3;
	std::cout << "Объем октаэдра = " << V;
	std::cout << std::endl;

	return 0;
}