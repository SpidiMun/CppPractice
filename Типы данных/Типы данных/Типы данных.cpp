#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    cout << "Введите кол-во повторений:\n";
    int counter, i;
    cin >> counter;
    for (i = 1; i <= counter; i++)
    {
        cout << "Тест №" << i << ";" << endl;
        cout << "Введите значение b :\n" << "b = ";
        double b;
        cin >> b;
        while (b < 2)
        {
            cout << "Ошибка: Введено значение b, при котором невозможно высчитать корректное значение z1 и z2. Введите значение b, большее или равное 2:" << endl << "b = ";
            cin >> b;
        }
        long float z1, z2;
        z1 = (sqrt(2 * b + 2 * sqrt(pow(b, 2) - 4)) / (sqrt(pow(b, 2) - 4) + b + 2));
        z2 = 1 / (sqrt(b + 2));
        cout << "Значение z1 равняется: " << z1 << ";\n";
        cout << "Значение z2 равняется: " << z2 << ";\n";
    }
}
