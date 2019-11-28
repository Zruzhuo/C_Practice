#include<iostream>
#include<string>
using namespace std;

int main()
{
	string wildCard, str;
	cin >> wildCard >> str;
	int x = 0, y = 0, k = 1;
	while (x < wildCard.size() - 1 && y < str.size() - 1)
	{
		if (wildCard[x] == str[y] || wildCard[x] == '?')
		{
			++x;
			++y;
		}
		else if (wildCard[x] == '*')
		{
			if (wildCard[x + 1] == str[y + 1])
			{
				++x;
				++y;
			}
			else
			{
				++y;
			}
		}
		else
		{
			k = 0;
			break;
		}
	}
	if (k == 1)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}