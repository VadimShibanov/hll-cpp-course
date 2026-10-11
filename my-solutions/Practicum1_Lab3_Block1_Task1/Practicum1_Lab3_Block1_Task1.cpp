#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	double x, y;

	cout << "Введите x\n";
	cin >> x;

	if (x > 2.5)
		y = x - 2;
	else if (x >= 0 && x <= 2.5)
		y = 1 + pow(x, 2);
	else
		y = x * log(abs((cos(x))));

	cout << y << endl;
	return 0;
}