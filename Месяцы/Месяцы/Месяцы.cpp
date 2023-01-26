#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	cout << "Введите порядковый номер месяца:\n";
	int Number_month;
	cin >> Number_month;
	while (Number_month > 12 || Number_month < 1)
	{
		cout << "Ошибка: Число месяцев - 12, и их отсчет начинается с 1. Пожалуйста, введите новое число:\n";
		cin >> Number_month;
	}
	enum Month
	{
		MONTH_JANUARY = 1,
		MONTH_FEBRUARY,
		MONTH_MARCH,
		MONTH_APRIL,
		MONTH_MAY,
		MONTH_JUNE,
		MONTH_JULY,
		MONTH_AUGUST,
		MONTH_SEPTEMBER,
		MONTH_OCTOBER,
		MONTH_NOVEMBER,
		MONTH_DECEMBER
	};
	cout << "Все названия месяцев, начиная с данного:" << endl;
	while (Number_month < 13)
	{
		switch (Number_month)
		{
		case MONTH_JANUARY: { cout << "Январь\n"; break; }
		case MONTH_FEBRUARY: { cout << "Февраль\n"; break; }
		case MONTH_MARCH: { cout << "Март\n"; break; }
		case MONTH_APRIL: { cout << "Апрель\n"; break; }
		case MONTH_MAY: { cout << "Май\n"; break; }
		case MONTH_JUNE: { cout << "Июнь\n"; break; }
		case MONTH_JULY: { cout << "Июль\n"; break; }
		case MONTH_AUGUST: { cout << "Август\n"; break; }
		case MONTH_SEPTEMBER: { cout <<  "Сентябрь\n"; break; }
		case MONTH_OCTOBER: { cout << "Октябрь\n"; break; }
		case MONTH_NOVEMBER: { cout << "Ноябрь\n"; break; }
		case MONTH_DECEMBER: { cout << "Декабрь\n"; break; }
		}
		Number_month++;
	}
}

