#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Дан массив:\n";
    int A[15] = { 12, -32, 52, 56, -67, 89, 27, 34, -46, 65, 45, 1, -5, 23, -100 };
    int i, j;
    for (i = 0; i < 15; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Сортируем методом Обмена (Пузырька).";
    int y;
    for (i = 0; i < 14; i++)
    {
        for (j = 14; j > i; j--)
        {
            if (A[j] < A[j - 1])
            {
                y = A[j];
                A[j] = A[j - 1];
                A[j - 1] = y;
            }
        }
    }
    cout << "Таким образом, получился массив:\n";
    for (i = 0; i < 15; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    system("pause");
}
