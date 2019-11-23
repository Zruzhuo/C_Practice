#include<iostream>
using namespace std;

int GetMonthDay(int year, int month)
{
	if (((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)) && month == 2)
	{
		return 29;
	}
	else
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			return 31;
		else if (month == 2)
			return 28;
		else
			return 30;
	}
}
int main()
{
	int year = 0, month = 0, day = 0;
	while (cin >> year >> month >> day)
	{
		int value = 0;
		value += day;
		month -= 1;
		while (month != 0)
		{
			value += GetMonthDay(year, month);
			--month;
		}
		cout << value << endl;
	}
	system("pause");
	return 0;
}