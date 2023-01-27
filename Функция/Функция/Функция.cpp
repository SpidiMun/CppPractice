#include <stdio.h>
#include <iostream>
#include <math.h>

#define eps 0.000001

double fx(double x) // вычисляемая функция
{
    return (sqrt(1 - 0.4 * pow(x, 2)) - asin(x));
}

double dfx(double x) // производная функции
{ 
    return (-0.8 * x) / 2 * sqrt(1 - 0.4 * pow(x, 2)) - 1 / sqrt(1 - 0.4 * pow(x, 2));
}

typedef double(*function)(double x); // задание типа function

double solve(function fx, function dfx, double x0)
{
    double x1 = x0 - fx(x0) / dfx(x0); // первое приближение
    while (fabs(x1 - x0) > eps) { // пока не достигнута точность 0.000001
        x0 = x1;
        x1 = x0 - fx(x0) / dfx(x0); // последующие приближения
    }
    return x1;
}

int main()
{
    double x1;
    std::cin >> x1;
    printf("%f\n", solve(fx, dfx, 4)); // вывод на экран
    return 0;
}