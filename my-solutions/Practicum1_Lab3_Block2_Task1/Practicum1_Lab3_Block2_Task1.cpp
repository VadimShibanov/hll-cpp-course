#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	double number;
	int amount = 0;

	cout << "Введите любое число ";
	cin >> number;

	double firstNumber = number;

	while (number != 0) {
		cin >> number;
		if (number < firstNumber && number != 0) amount++;
	}

	cout << amount << endl;

	return 0;
}