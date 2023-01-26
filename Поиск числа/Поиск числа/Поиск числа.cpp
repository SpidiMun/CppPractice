#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    cout << "Введите кол-во чисел в поседовательности:\n";
    int n, i;
    cin >> n;
    i = 1;
    cout << "Введите число, которое хотите найти:\n";
    int z;
    cin >> z;
    bool f;
    f = false;
    cout << "Есть ли число " << z << " в последовательности?" << endl << "Последовательность:\n";
    while (i <= n && f == false)
    {
        int a;
        cin >> a;
        if (a == z)
        {
            f = true;
        }
        else
        {
            i++;
        }
    }
    if (f == true)
    {
        cout << "Число нашлось!";
    }
    else
    {
        cout << "Такого числа нет!";
    }
}