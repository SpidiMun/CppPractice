#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
	return (sqrt(1 - 0.4 * pow(x, 2)) - asin(x));
}

int main()
{
	setlocale(0, "Russian");
	cout << "Введите рассматриваемый интервал:\n";
	int a, b;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "AB = [ " << a << " ; " << b << " ]\n";
	cout << "Введите точность вычисления корня:\n";
	double Epsilon;
	cin >> Epsilon;
	double x0, x1, x2;
	x1 = a;
	x2 = b;
	while (abs(x1 - x2) >= Epsilon)
	{
		x0 = (x2 + x1) / 2;
		if (f(x1) * f(x0) < 0)
		{
			x2 = x0;
		}
		else
		{
			if (f(x2) * f(x0) < 0)
			{
				x1 = x0;
			}
		}
	}
	cout << "Корень: ";
	cout << x2 << " или " << x1;
}

