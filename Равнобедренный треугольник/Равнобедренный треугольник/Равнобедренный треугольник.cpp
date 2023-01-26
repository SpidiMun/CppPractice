#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Введите длину основания треугольника:\n";
    int N;
    cin >> N;
    while (N <= 0 || N % 2 == 0)
    {
        if (N <= 0)
        {
            cout << "Ошибка: длина основания не может быть отрицательной или равной нулю. Введите положительное число:\n";
            cin >> N;
        }
        if (N % 2 == 0)
        {
            cout << "Ошибка: введите нечетное число:\n";
            cin >> N;
        }
    }
    int i, j;
    for (i = 1; i <= N; i+=2)
    {
        for (j = 1; j <= (N - i) / 2; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= (N - i) / 2; j++)
        {
            cout << " ";
        }
        cout << endl;

    }
}