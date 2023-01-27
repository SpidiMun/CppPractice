#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

long double sqrt_func(int Number_0, long double Number_1, long double Epsilon)
{
    long double Number_2;
    Number_2 = (Number_1 + Number_0 / Number_1) / 2;
    if (fabs(Number_2 - Number_1) > Epsilon)
    {
        Number_1 = Number_2;
        Number_2 = sqrt_func(Number_0, Number_1, Epsilon);
    }
    return Number_2;
}

int main()
{
    setlocale(0, "Russian");
    int int_Number;
    cout << "Введите целое положительное число:\n";
    cin >> int_Number;
    while (int_Number <= 0)
    {
        cout << "Ошибка: Число меньше или равно нулю. Введите новое целое положительное число:\n";
    }
    long double double_Number, Epsilon;
    cout << "Введите точность вычислений корня:\n";
    cin >> Epsilon;
    double e;
    int c;
    e = Epsilon;
    c = 0;
    while (e < 1)
    {
        e = e * 10;
        c++;
    }
    int counter;
    counter = 0;
    long double add_Number; // Для вычисления приближенного корня (используем формулу Герона)
    add_Number = int_Number / 2;
    double_Number = sqrt_func(int_Number, add_Number, Epsilon);
    cout << fixed << setprecision(c);
    cout << double_Number;
}