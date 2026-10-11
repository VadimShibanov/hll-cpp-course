#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	int month;

	cout << "Введите порядковый номер месяца года\n";
	cin >> month;

	switch (month) {
	case 1: case 2: case 12: cout << "Зима\n"; break;
	case 3: case 4: case 5: cout << "Весна\n"; break;
	case 6: case 7: case 8: cout << "Лето\n"; break;
	case 9: case 10: case 11: cout << "Осень\n"; break;
	default: cout << "Такого нет месяца\n";
	}

	return 0;
}