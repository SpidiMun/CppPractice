#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	cout << "Введите целое натуральное число N:" << endl << "N = ";
	int N, S, N1, counter;
	cin >> N;
	N1 = N;
	S = 0;
	counter = 1;
	while (N == 0)
	{
			cout << "Вы ввели неподходящее число. Введите целое положительное число N:" << endl << "N = ";
			cin >> N;
	}
	while (N > 0)
	{
		S += N % 10;
		N = N / 10;
	}
	cout << "Сумма цифр в числе " << N1 << " равна " << S << endl;
}