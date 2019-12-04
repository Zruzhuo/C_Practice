#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.size();
	int grade = 0;
	if (len <= 4) {
		grade += 5;
	}
	else if(len >4 && len <=7){
		grade += 10;
	}
	else {
		grade += 25;
	}
	int number = 0, letter = 0, character = 0;
	for (int i = 0; i < len; ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
			++number;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if(letter == 0)
				letter = 'a';
			if (letter == 'A')
				letter += 'a';
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (letter == 0)
				letter = 'A';
			if (letter == 'a')
				letter += 'A';
		}
		if (!(str[i] >= '0' && str[i] <= '9') && !(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			++character;
		}
	}
	if (letter == 'a' || letter == 'A')
		grade += 10;
	if (letter == 'a' + 'A')
		grade += 20;
	if (number == 1)
		grade += 10;
	if (number > 1)
		grade += 20;
	if (character == 1)
		grade += 10; 
	if (character > 1)
		grade += 25;
	if (letter != 0 && number != 0 && character == 0)
		grade += 2;
	if ((letter == 'a' || letter == 'A') && number != 0 && character != 0)
		grade += 3;
	if ((letter == 'a' + 'A') && number != 0 && character != 0)
		grade += 5;
	if (grade >= 90)
		 cout << "VERY_SECURE" << endl;
	if (grade >= 80 && grade <90)
		 cout << "SECURE" << endl;
	if (grade >= 70 && grade <80)
		 cout << "VERY_STRONG" << endl;
	if (grade >= 60 &&grade < 70)
		cout << "STRONG" << endl;
	if (grade >= 50 && grade < 60)
		cout << "AVERAGE" << endl;
	if (grade >= 25 && grade <50)
		cout << "WEAK" << endl;
	if (grade >= 0 && grade < 25)
		cout << "VERY_WEAK" << endl;
	system("pause");
	return 0;
}