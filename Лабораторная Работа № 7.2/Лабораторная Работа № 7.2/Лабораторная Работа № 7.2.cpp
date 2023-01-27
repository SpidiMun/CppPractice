#include <iostream>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265      
using namespace std;

double angles(int k, ...)
{
    int* p = &k;
    p += 1;
    int Number = *(p);
    double angle, cosinus;
    int i;
    p += 1;
    int* px = p;
    px[0] = *p;
    p += ((k - 1) / 2);
    int* py = p;
    double len1, len2, len3;
    len1 = pow(abs(px[0] - px[Number - 1]), 2) + pow(abs(py[0] - py[Number - 1]), 2);
    len2 = pow(abs(px[0] - px[1]), 2) + pow(abs(py[0] - py[1]), 2);
    len3 = pow(abs(px[1] - px[Number - 1]), 2) + pow(abs(py[1] - py[Number - 1]), 2);
    cosinus = (len3 - (len2 + len1)) / (-2 * sqrt(len2) * sqrt(len1));
    angle = acos(cosinus) * 180.0 / pi;
    cout << angle << " ";
    for (i = 1; i < Number - 1; i++)
    {
        len1 = pow(abs(px[i] - px[i - 1]), 2) + pow(abs(py[i] - py[i - 1]), 2);
        len2 = pow(abs(px[i] - px[i + 1]), 2) + pow(abs(py[i] - py[i + 1]), 2);
        len3 = pow(abs(px[i + 1] - px[i - 1]), 2) + pow(abs(py[i + 1] - py[i - 1]), 2);
        cosinus = (len3 - (len2 + len1)) / (-2 * sqrt(len2) * sqrt(len1));
        angle = acos(cosinus) * 180.0 / pi;
        cout << angle << " ";
    }
    len1 = pow(abs(px[Number - 1] - px[Number - 2]), 2) + pow(abs(py[Number - 1] - py[Number - 2]), 2);
    len2 = pow(abs(px[Number - 1] - px[0]), 2) + pow(abs(py[Number -1] - py[0]), 2);
    len3 = pow(abs(px[0] - px[Number - 2]), 2) + pow(abs(py[0] - py[Number - 2]), 2);
    cosinus = (len3 - (len2 + len1)) / (-2 * sqrt(len2) * sqrt(len1));
    angle = acos(cosinus) * 180.0 / pi;
    cout << angle << " ";
    return 0;
}

int main()
{
    setlocale(0, "Russian");
    cout << "Вычислим угол треугольника со сторонами:\n";
    double a, b, c;
    cin >> a >> b >> c;
    while ((a + b < c || a + c < b || b + c < a) || (a < 1 || b < 1 || c < 1))
    {
        if (a + b > c || a + c > b || b + c > a)
        {
            cout << "Ошибка. Введенные стороны не образуют треугольник. Введите новые значения сторон:\n";
            cin >> a >> b >> c;
        }
        else
        {
            if (a < 1 || b < 1 || c < 1)
            {
                cout << "Ошибка. Введите положительные значения сторон:\n";
                cin >> a >> b >> c;
            }
        }

    }
    double value_cos, angle;
    cout << "Найдем углы треугольника.\nВоспользуемся теоремой косинусов:\nУглы треугольника равны:\n";
    value_cos = (pow(a, 2) - (pow(b, 2) + pow(c, 2))) / (-2 * b * c);
    angle = acos(value_cos) * 180.0 / pi;
    cout << angle << "; ";
    value_cos = (pow(b, 2) - (pow(a, 2) + pow(c, 2))) / (-2 * a * c);
    angle = acos(value_cos) * 180.0 / pi;
    cout << angle << "; ";
    value_cos = (pow(c, 2) - (pow(a, 2) + pow(b, 2))) / (-2 * a * b);
    angle = acos(value_cos) * 180.0 / pi;
    cout << angle << ".\n";
    cout << "Теперь найдем углы многоугольникоа по заданным координатам вершин.\nРассмотим треугольник.\n";
    cout << "Введите координаты вершин треугольника:\n";
    int Number;
    Number = 3;
    int* x = new int[Number];
    int* y = new int[Number];
    int i;
    for (i = 0; i < Number; i++)
    {
        cin >> x[i] >> y[i];
    }
    cout << "Найдем углы треугольника.\n";
    int k;
    k = 2 * Number + 1;
    cout << "Углы треугольника равны: \n";
    angle = angles( k, Number, x[0], x[1], x[2], y[0], y[1], y[2] );
    cout << endl;
    cout << "Найдем углы девятиугольника.\n";
    cout << "Введите координаты вершин девятиугольника:\n";
    Number = 9;
    x = new int[Number];
    y = new int[Number];
    for (i = 0; i < Number; i++)
    {
        cin >> x[i] >> y[i];
    }
    k = 2 * Number + 1;
    cout << "Углы девятиугольника равны: \n";
    angle = angles(k, Number, x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7], x[8], y[0], y[1], y[2], y[3], y[4], y[5], y[6], y[7], y[8]);
    cout << endl;
    cout << "Найдем углы одиннадцатиугольника.\n";
    cout << "Введите координаты вершин одиннадцатиугольника:\n";
    Number = 11;
    x = new int[Number];
    y = new int[Number];
    for (i = 0; i < Number; i++)
    {
        cin >> x[i] >> y[i];
    }
    k = 2 * Number + 1;
    cout << "Углы одиннадцатиугольника равны: \n";
    angle = angles(k, Number, x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7], x[8], x[9], x[10], y[0], y[1], y[2], y[3], y[4], y[5], y[6], y[7], y[8], y[9], y[10]);
}
