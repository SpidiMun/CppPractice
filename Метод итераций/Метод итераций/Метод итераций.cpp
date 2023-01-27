#include <iostream>
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
	cout << "Введите произвольный корень:\n";
	cin >> x1;
	while (x1 > b || x1 < a)
	{
		cout << "Ошибка. Введите новое число:\n";
		cin >> x1;
	}
	x2 = f(x1);
	while (abs(x1 - x2) >= Epsilon)
	{
		x1 = x2;
		x2 = x1 + f(x1);
	}
	cout << "Корень: ";
	cout << x2 << " или " << x1;
}