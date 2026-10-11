#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	char symbol;

	cout << "Введите букву аглийского алфавита или цифру\n";
	cin >> symbol;

	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
		cout << "Это буква\n";
	else if (symbol >= '0' && symbol <= '9')
		cout << "Это цифра\n";
	else cout << "Это не буква и не цифра\n";

	return 0;
}