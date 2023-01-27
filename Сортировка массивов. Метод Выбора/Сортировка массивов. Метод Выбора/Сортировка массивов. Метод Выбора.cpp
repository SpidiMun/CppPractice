#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Дан массив:\n";
    int A[15] = { -8, 1, 76, 65, 99, 79, -27, 61, 47, -33, 49, 0, 50, -63, 68 };
    int i, j;
    for (i = 0; i < 15; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Сортируем методом Выбора.";
    int y, min;
    for (i = 0; i < 14; i++)
    {
        min = i; // индекс минимального элемента
        y = A[i];
        for (j = i + 1; j < 15; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        A[i] = A[min];
        A[min] = y;
    }
    cout << "Таким образом, получился массив:\n";
    for (i = 0; i < 15; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    system("pause");
}
