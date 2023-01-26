#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Введите массу арбуза:\n";
    int Weigth;
    cin >> Weigth;
    while (Weigth <= 0)
    {
        cout << "Ошибка: масса арбуза не может быть отрицательной или равной нулю. Введите новую массу:\n";
        cin >> Weigth;
    }
    cout << "Можно ли разделить арбуз на две части, масса которых - чётное число?\n";
    if (Weigth > 3)
    {
        if (Weigth % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}