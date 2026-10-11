#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(CP_UTF8);

	setlocale(LC_CTYPE, "Russian");
	double R, S, L;

	std::cout << "Введите R>";
	std::cin >> R;

	L = 2 * M_PI * R;
	S = M_PI * std::pow(R, 2);

	std::cout
		<< "Длина окружности L="
		<< L
		<< "\nПлощадь круга S = "
		<< S
		<< std::endl;
	return 0;
}