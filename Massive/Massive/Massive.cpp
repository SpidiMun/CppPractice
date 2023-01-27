#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Введите кол-во элементов в массиве:\n";
    int Number_Elements;
    cin >> Number_Elements;
    while (Number_Elements < 1)
    {
        cout << "Ошибка: введите положительное число:\n";
        cin >> Number_Elements;
    }
    cout << "Введите элементы массива:\n";
    int* Massive = new int[Number_Elements];
    int i;
    i = 0;
    for (i = 0; i < Number_Elements; i++)
    {
        cin >> Massive[i];
    }
    cout << "Найдем минимальный элемент массива (его значение), его номер и кол-во минимальных элементов, если их несколько.\n";
    int Min_Element, Number_of_Min_Element, Counter_of_Min_Elements;
    Min_Element = Massive[0];
    Number_of_Min_Element = 1;
    Counter_of_Min_Elements = 1;
    for (i = 1; i < Number_Elements; i++)
    {
        if (Massive[i] < Min_Element)
        {
            Min_Element = Massive[i];
            Number_of_Min_Element = i + 1;
            Counter_of_Min_Elements = 1;
        }
        else
        {
            if (Min_Element == Massive[i])
            {
                Counter_of_Min_Elements++;
            }
        }
    }
    cout << "Значение минимального(-ых) элемента (-ов) равно " << Min_Element << ";\nНомер первого найденного минимального элемента равно " << Number_of_Min_Element << ";\nКол-во минимальных элементов равно " << Counter_of_Min_Elements << ";\n";
}