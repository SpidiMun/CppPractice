#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    cout << "Введите цифру:\n";
    int Number;
    cin >> Number;
    if (Number > 9 || Number < 0)
    {
        cout << "Введена не цифра!";
    }
    else
    {
        enum Digit
        {
            DIGIT_ZERO,
            DIGIT_ONE,
            DIGIT_TWO,
            DIGIT_THREE,
            DIGIT_FOUR,
            DIGIT_FIVE,
            DIGIT_SIX,
            DIGIT_SEVEN,
            DIGIT_EIGHT,
            DIGIT_NINE
        };
        cout << "Все нечётные цифры, которые больше или равны цифре " << Number << ":" << endl;
        switch (Number)
        {
        case DIGIT_ZERO: { cout << "1, 3, 5, 7, 9"; break; }
        case DIGIT_ONE: { cout << "1, 3, 5, 7, 9"; break; }
        case DIGIT_TWO: { cout << "3, 5, 7, 9"; break; }
        case DIGIT_THREE: { cout << "3, 5, 7, 9"; break; }
        case DIGIT_FOUR: { cout << "5, 7, 9"; break; }
        case DIGIT_FIVE: { cout << "5, 7, 9"; break; }
        case DIGIT_SIX: { cout << "7, 9"; break; }
        case DIGIT_SEVEN: { cout << "7, 9"; break; }
        case DIGIT_EIGHT: { cout << "9"; break; }
        case DIGIT_NINE: { cout << "9";  break; }
        }
    }
}
