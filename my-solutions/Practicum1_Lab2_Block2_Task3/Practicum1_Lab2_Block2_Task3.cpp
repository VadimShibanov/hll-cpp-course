#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	int year;

l1: cout << "Введите год\n";
	cin >> year;

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		cout << "Введенный год високосный\n";
	else {
		cout << "Это не високосный год, введите високосный\n";
		goto l1;
	}

	return 0;
}