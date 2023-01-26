#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Введите длину боковых сторон-катетов:\n";

    int N;
    cin >> N;
    while (N <= 0)
    {
        cout << "Ошибка: длина катета не может быть отрицательной или равной нулю. Введите положительное число:\n";
        cin >> N;
    }
    N = N;
    int i, j;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N - i; j++)
        {
            cout << " ";
        }
        for (j = N+1-i; j <= N; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
