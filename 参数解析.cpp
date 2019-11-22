#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int count = 0;
	auto begin = str.begin();
	auto end = str.begin();
	while (end != str.end())
	{
		if (*end == '"')
		{
			++end;
			while (*end != '"')
			{
				++end;
			}
			++count;
			end += 2;
		}
		else if (*end == ' ')
		{
			++count;
			++end;
		}
		else
		{
			++end;
		}
	}
	cout << count + 1 << endl;
	end = str.begin();
	while (end != str.end())
	{
		if (*end == '"')
		{
			++ end;
			while (*end != '"')
			{
				cout << *end;
				++end;
			}
			cout << endl;
			end += 2;
		}
		else if (*end == ' ')
		{
			cout << endl;
			++end;
		}
		else
		{
			cout << *end;
			++end;
		}
	}
	return 0;
	system("pause");
}