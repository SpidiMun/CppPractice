#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Даны два массива.\n";
    int i, j;
    cout << "Первый массив символьного типа:\n";
    char A[15] = { 'z', 'e', 'q', 't', 'd', 'a', 'v', 'u', 'o', 'h', 'p', 'c', 'g', 'l', 'y' };
    for (i = 0; i < 15; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Второй массив целочисленного типа:\n";
    int B[15] = { 45, 23, 67, 78, 12, 90, 37, 21, 99, 43, 66, 86, 58, 31, 92 };
    for (i = 0; i < 15; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    cout << "Сортируем каждый массив.\n";
    cout << "Первый массив сортируем методом Вставки:\n";
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
    cout << "Второй массив сортируем методом Обмена (Пузырька):\n";
    for (i = 0; i < 14; i++)
    {
        for (j = 14; j > i; j--)
        {
            if (B[j] < B[j - 1])
            {
                y = B[j];
                B[j] = B[j - 1];
                B[j - 1] = y;
            }
        }
    }
    cout << "Таким образом, получился массив:\n";
    for (i = 0; i < 15; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
}