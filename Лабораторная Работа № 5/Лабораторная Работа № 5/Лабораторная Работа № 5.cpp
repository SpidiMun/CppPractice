#include <iostream>
#include <stdio.h>
using namespace std;

int Max_Element(int** Mas, int N, int M)
{
    int i, j;
    int str, stl;
    int max;
    bool f = false;
    for (i = 0; i < N; i++)
    {
        max = -32768;
        for (j = 0; j < M - 1; j++)
        {
            if (Mas[i][j] > max)
            {
                str = 0;
                stl = 0;
                Mas[i][M - 1] = -32768;
                for (str = 0; str < N; str++)
                {
                    for (stl = 0; stl < M - 1; stl++)
                    {
                        if (Mas[i][j] == Mas[str][stl] && (i != str && j != stl))
                        {
                            max = Mas[i][j];
                            f = true;
                        }
                    }
                }
                if (f == true)
                {
                    Mas[i][M - 1] = max;
                }
            }
        }
    }
    max = Mas[0][M - 1];
    j = 0;
    for (i = 0; i < N; i++)
    {
        if (max < Mas[i][M - 1])
        {
            max = Mas[i][M - 1];
        }
    }
    return max;
}

int main()
{
    setlocale(0, "Russian");
    cout << "Введите кол-во строк и столбцов:\n";
    int N, M;
    int i, j;
    int max;
    cin >> N >> M;
    while ((N < 1 || M < 2) && (N < 2 || M < 1) && (N < 2 || M < 2))
    {
        cout << "Ошибка. Введите положительные числа, которые оба больше 1 или хотя бы одно из чисел больше 1:\n";
        cin >> N >> M;
    }
    M++;
    int** Mas;
    Mas = new int*[N];
    for (i = 0; i < N; i++)
    {
        Mas[i] = new int[M];
    }
    cout << "Вводим двумерный массив...\n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M - 1; j++)
        {
            Mas[i][j] = -2 + rand() % 3;
        }
    }
    cout << "Таким образом, массив выглядит следующе:\n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M - 1; j++)
        {
            cout << Mas[i][j] <<  "\t";
        }
        cout << endl;
    }
    cout << endl << "Найдем максимальный повторяющийся элемент массива.\n";
    max = Max_Element(Mas, N, M);
    if (max != -32768)
    {
        cout << endl << "Максимальный элемент в массиве: " << max;
    }
    else
    {
        cout << "Повторяющихся элементов нет.";
    }
}