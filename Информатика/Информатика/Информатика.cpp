#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Дано слово:\n";
    string Word;
    Word = "информатика";
    cout << Word << endl;
    cout << "Введите букву, которую хотите найти в данном слове: ";
    char Сharacter;
    cin >> Сharacter;
    cout << "Найдем в слове " << Word << " букву " << Сharacter << ";\n";
    switch (Сharacter)
    {
    case 'и': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    case 'н': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    case 'ф': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    case 'о': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    case 'р': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    case 'м': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    case 'а': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    case 'т': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    case 'к': { cout << "Буква " << Сharacter << " встречается в данном слове!" << endl; return 0; }
    default: { cout << "Буквы " << Сharacter << " нет!" << endl; return 0; }
    }
}
