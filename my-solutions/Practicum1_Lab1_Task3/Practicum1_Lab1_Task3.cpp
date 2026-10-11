#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	double S, H, V;
	std::cout << "Введите S\n";
	std::cin >> S;
	std::cout << "Введите H\n";
	std::cin >> H;
	V = H / 3 * S;

	std::cout << V;
	std::cout << std::endl;
}