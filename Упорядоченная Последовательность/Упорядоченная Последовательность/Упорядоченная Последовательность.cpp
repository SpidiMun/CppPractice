#include <iostream>
using namespace std;

int main()
{
    setlocale (0, "Russian");
    unsigned int a, b; 
    int count;
    bool f;
    f = true;
    cout << "Введите элементы последовательности\n";
    cin >> a;
    int i;
    if (a != 0)
    {
        cin >> b;
        while (a != b && f == true && b != 0)
        {
            
            f = f && (a < b);
            if (f == true)
            {
                a = b;
                cin >> b;
            }
        }
        if (f == true)
        {
            cout << "Последовательность упорядочена\n";
        }
        else
        {
            cout << "Последовательность не упорядочена\n";
        }
    }
    else
    {
        cout << "Последовательности не существует\n";
    }
}
