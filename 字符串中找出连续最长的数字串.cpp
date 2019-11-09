#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	size_t maxlen = 0;
	string tmp;
	string max;
	size_t i = 0;
	while (i <= str.length())
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				tmp += str[i];
				++i;
			}
			if (tmp.size() > maxlen)
			{
				max = tmp;
				maxlen = tmp.size();
			}
		}
		tmp.clear();
		++i;
	}
	cout << max << endl;
		
	system("pause");
	return 0;
}