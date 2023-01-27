#include <iostream>
#include <Windows.h>
#include <string>
#include <regex>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите рассматриваемую строку:\n";
    string text;
    cin >> text;
    unsigned ui = 0;
    bool f = true;
    while (ui < text.length() && f == true)
    {
        if (((int)text[ui] < -64 || (int)text[ui] > -33) && (int)text[ui] != 95)
        {
            f = false;
        }
        ui++;
    }
    ui = 0;
    unsigned int ucounter = 1;
    while (ui < text.length())
    {
        if (text[ui] == '_')
        {
            ucounter++;
        }
        ui++;
    }    
    if (f == true)
    {
        string* str = new string[ucounter];
        unsigned int word_len = 0;
        int j = 0;
        unsigned int starting = 0;
        unsigned uk = 0;
        for (ui = 0; ui < text.length(); ui++)
        {
            if (text[ui] != '_')
            {
                if (ui == text.length() - 1)
                {
                    for (uk = starting; uk < ui + 1; uk++)
                    {
                        str[j] = str[j] + text[uk];
                    }
                }
                else
                {
                    word_len++;
                }
            }
            else
            {
                if (text[ui] == '_')
                {
                    for (uk = starting; uk < ui; uk++)
                    {
                        str[j] = str[j] + text[uk];
                    }
                    word_len = 0;
                    starting = ui + 1;
                    j++;
                }
            }
        }
        string str_s, str_r;
        cout << "Введите маску:\n";
        cin >> str_s;
        ui = 0;
        while (ui < str_s.length() && f == true)
        {
            if (((int)str_s[ui] < -64 || (int)str_s[ui] > -33) && (int)str_s[ui] != 42)
            {
                f = false;
            }
            ui++;
        }
        if (f == true)
        {
            str_r = str_r + "(";
            for (ui = 0; ui < str_s.length(); ui++)
            {
                if (str_s[ui] == '*')
                {
                    str_r = str_r + "[А-Я]*";
                }
                else
                {
                    str_r = str_r + str_s[ui];
                }
            }
            str_r = str_r + ")";
            cmatch result;
            regex r(str_r);
            string stroka;
            for (ui = 0; ui < ucounter; ui++)
            {
                stroka = str[ui];
                if (regex_match(stroka.c_str(), result, r) == true)
                {
                    for (uk = 0; uk < result.size(); uk++)
                    {
                        cout << result[uk++];
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << "Ошибка: маска содержит недопустимые символы.\nВыход из программы...";
        }
    }
    else
    {
        cout << "Ошибка: строка содержит недопустимые символы.\nВыход из программы...";
    }
}