#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double Pi = 3.14;

int main()
{
	int i = 4;
	double y;

	for (int count = -10; count <= 10; count++) {
		double s = count * 0.1;

		if (fabs(Pi * s) >= 3.5) y = Pi * sin(s);
		else y = cbrt(Pi + s) / (pow(fabs(s), -Pi) * tan(i));

		cout << setw(4) << right << s << "\t" << y << endl;
	}

	return 0;
}