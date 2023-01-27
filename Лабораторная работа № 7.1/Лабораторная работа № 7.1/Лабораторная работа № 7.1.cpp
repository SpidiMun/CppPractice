#include <iostream>
#include <windows.h>
using namespace std;

int func(string answer, int counter, int N, int A[], string str)
{
    if (answer == "м")
    {
        int i;
        for (i = 0; i < N; i++)
        {
            if (A[i] < 0)
            {
                counter++;
            }
        }
        return counter;
    }
    else
    {
        int i;
        char first;
        first = str[0];
        for (i = 1; i < str.length(); i++)
        {
            if (str[i] == ',')
            {
                first = str[i + 1];
            }
            else
            {
                if (str[i + 1] == ',' || i == str.length() - 1)
                {
                    if (str[i] == first)
                    {
                        counter++;
                    }
                }
            }
        }
        return counter;
    }
}

int main()
{
    setlocale(0, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите кол-во элементов в массиве:\n";
    int N;
    cin >> N;
    while (N < 1)
    {
        cout << "Ошибка. Введите положительное число:\n";
        cin >> N;
    }
    int* A = new int[N];
    cout << "Введите элементы массива:\n";
    int i;
    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cout << "Введите строку прописными буквами, отделяя слова запятой без пробела:\n";
    string str;
    cin >> str;
    cout << "С чем вы хотите сначала провести операции: массив или строка (введите соответствующую первую строчную букву)?:\n";
    string answer;
    cin >> answer;
    while (answer != "м" && answer != "с")
    {
        cout << "Ошибка. Введите букву м или с:\n";
        cin >> answer;
    }
    int counter_m, counter_s, counter_func;
    int j;
    for (j = 0; j < 2; j++)
    {
        if (answer == "м")
        {
            counter_m = 0;
            counter_func = 0;
            cout << "Найдем кол-во отрицательных элементов.\n";
            counter_m = func(answer, counter_func, N, A, str);
            cout << "Кол-во элементов меньше нуля равно " << counter_m << endl;
            answer = 'с';
        }
        else
        {
            counter_s = 0;
            counter_func = 0;
            cout << "Найдем кол-во слов в строке, которые оканчиваются и начинаются на одну и ту же букву.\n";
            counter_s = func(answer, counter_func, N, A, str);
            cout << "Кол-во слов равно " << counter_s << endl;
            answer = 'м';
        }
    }
}