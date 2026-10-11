#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	int age;

	cout << "Введите возраст\n";
	cin >> age;

	if (age <= 1 && age >= 0)
		cout << "Младенец\n";
	else if (age >= 2 && age <= 10)
		cout << "Юнец\n";
	else if (age >= 11 && age <= 20)
		cout << "Молодой\n";
	else if (age >= 21 && age <= 60)
		cout << "Работающий\n";
	else if (age > 60)
		cout << "Пенсонер\n";
	else if (age < 0)
		cout << "Возраст не может быть отрицательным\n";

	return 0;
}