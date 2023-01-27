#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Введите кол-во элементов в массиве:\n";
    int Number; // Кол-во элементов в массиве
    cin >> Number;
    while (Number < 3)
    {
        cout << "Ошибка: введите положительное число, которое больше, чем 2:\n";
        cin >> Number;
    }
    Number += 4;
    cout << "Введите элементы массива:\n";
    int* Massive = new int[Number];
    int i;
    for (i = 0; i < Number - 4; i++)
    {
        cin >> Massive[i];
    }
    cout << endl;
    cout << "Введите номер элемента массива, с которого хотите начать вывод на экран:\n";
    int k;
    cin >> k;
    while (k < 1 || k > Number - 4)
    {
        cout << "Ошибка: введите число, соответсвующий номеру в массиве:\n";
        cin >> k;
    }
    i = k - 1;
    bool f;
    f = false; // Сигнализирует о том, что произошел переход от одного конца массива к другому
    if (k - 2 == -1)
    {
        f = true;
        while (i != Number - 4 || f == false)
        {
            cout << Massive[i] << " ";
            i++;
        }
    }
    else
    {
        while (i != k - 1 || f == false)
        {
            if (i == Number - 4)
            {
                i = 0;
                f = true;
            }
            cout << Massive[i] << " ";
            i++;
        }
    }
    cout << endl;
    cout << "Добавим еще 4 элемента, один равный первому и остальные три соответственно равные 3-м последним элементам:\n";
    Massive[Number - 4] = Massive[0];
    for (i = Number - 3; i < Number; i++)
    {
        Massive[i] = Massive[i - 4];
    }
    for (i = 0; i < Number; i++)
    {
        cout << Massive[i] << " ";
    }
    cout << endl;
    f = false; // Сигнализирует о том, что произошел переход от одного конца массива к другому
    cout << "Введите номер элемента массива, с которого хотите начать вывод на экран:\n";
    cin >> k;
    while (k < 1 || k > Number)
    {
        cout << "Ошибка: введите число, соответсвующий номеру в массиве:\n";
        cin >> k;
    }
    i = k - 1;
    if (i == Number - 1)
    {
        f = true;
        while (i != -1 || f == false)
        {
            cout << Massive[i] << " ";
            i--;
        }
    }
    else
    {
        while (i != k - 1 || f == false)
        {
            if (i == -1)
            {
                i = Number - 1;
                f = true;
            }
            cout << Massive[i] << " ";
            i--;
        }
    }
    cout << endl;
}
