#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "Russian");
	cout << "Введите кол-во тестов:\n";
	int a;
	cin >> a;
	int i, j;
	int n, m;
	int x, y;
	int xn[8], ym[8];
	int counter;
	for (i=1; i <= a; i++)
	{
		counter = 0;
		for (j=0; j <=7; j++)
		{
			xn[j] = 0;
			ym[j] = 0;
		}
		cout << "Введите кол-во строк и кол-во столбцов " << i << " теста:\n";
		cin >> n >> m;
		cout << "Введите координаты коня:\n";
		cin >> x >> y;
		if (y - 2 > 0 && x - 1 > 0)
		{
			xn[0] = x - 1;
			ym[0] = y - 2;
			counter++;			
		}
		if (y - 2 > 0 && x + 1 <= n)
		{
			xn[1] = x + 1;
			ym[1] = y - 2;
			counter++;
		}
		if (y - 1 > 0 && x - 2 > 0)
		{
			xn[2] = x - 2;
			ym[2] = y - 1;
			counter++;
		}
		if (y + 1 <= m && x - 2 > 0)
		{
			xn[3] = x - 2;
			ym[3] = y + 1;
			counter++;
		}
		if (y + 2 <= m && x - 1 > 0)
		{
			xn[4] = x - 1;
			ym[4] = y + 2;
			counter++;
		}
		if (y + 2 <= m && x + 1 <= n)
		{
			xn[5] = x + 1;
			ym[5] = y + 2;
			counter++;
		}
		if (y + 1 <= m && x + 2 <= n)
		{
			xn[6] = x + 2;
			ym[6] = y + 1;
			counter++;
		}
		if (y - 1 > 0 && x + 2 <= n)
		{
			xn[7] = x + 2;
			ym[7] = y - 1;
			counter++;
		}
		cout << "Кол-во клеток под боем:" << counter << ";\n";
		if (counter != 0)
		{
			cout << "Координаты клеток под боем:\n";
			for (j = 0; j <= 7; j++)
			{
				if (xn[j] > 0 && ym[j] > 0)
				{
					cout << "x: " << xn[j] << "; " << "y: " << ym[j] << ";\n";
				}
			}
		}
		cout << "\n";
	}
}