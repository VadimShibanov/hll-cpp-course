#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_CTYPE, "Russian");

	double x, y;

	cout << "Введите x\n";
	cin >> x;

	if (x > 2.5)
		y = sin(2.3 * x - 1);
	else if (x >= 0 && x <= 2.5)
		y = 1 - 3 * log(abs(1 - x));
	else
		y = pow(x, 2) / (2 - x);

	cout << y;
	cout << endl;

	return 0;
}