#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Дан массив:\n";
    int A[15] = { -11, 32, -52, 44, 63, 88, 37, -4, 96, 66, -45, 81, 58, -23, 10 };
    int i, j;
    for (i = 0; i < 15; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Сортируем методом Вставки.";
    int y;
    for (i = 0; i < 14; i++)
    {
        j = i;
        y = A[j + 1];
        while (j >= 0)
        {
            if (A[j + 1] < A[j])
            {
                A[j + 1] = A[j];
                A[j] = y;
            }
            j--;
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
