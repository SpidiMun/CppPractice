﻿#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    setlocale(0, "Rus");
    float x1, y1, x2, y2, r1, r2, d;
    int;
    float x, y;
    cout << "Введите координаты x1, y1 и радиус r1 1-го круга:\n";
    cin >> x1 >> y1 >> r1;
    cout << " координаты x2, y2 и радиус r2 2-го круга:\n";
    cin >> x2 >> y2 >> r2;
    d = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    if (x1 == x2 && y1 == y2 && r1 == r2)
    {
        cout << "Окружности совпадают. Бесконечное число общих точек.";
        exit;
    }
    if (x1 == x2 && y1 == y2 && r1 != r2)
    {
        cout << "Центр окружностей совпадает. Нет общих точек.";
        exit;
    }
    if (d == pow(r1 + r2, 2))
    {
        cout << "Окружности касаются друг друга внешне. Одна общая точка.";
        exit;
    }
    if (d == pow(r1 - r2, 2) && x1 != x2 && y1 != y2 && r1 != r2)
    {
        cout << "Окружности касаются друг друга внутренне. Одна общая точка.";
        exit;
    }
    if (d > pow(r1 + r2, 2))
    {
        cout << "Окружности не пересекаются внешне. Нет общих точек.";
        exit;
    }
    if (d > pow(r1 - r2, 2) && d < pow(r1 + r2, 2))
    {
        cout << "Окружности пересекаются. Две общие точки.";
        exit;
    }
    if (d > 0 && d < pow(r1 - r2, 2))
    {
        cout << "Окружности не пересекаются внутренне. Нет общих точек.";
        exit;
    }
}