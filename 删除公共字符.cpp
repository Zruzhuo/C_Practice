#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	for (size_t i = 0; i < str2.size(); ++i)
	{
		for (size_t j = 0; j < str1.size(); ++j)
		{
			if (str2[i] == str1[j])
			{
				str1.erase(j, 1);
				--j;
			}
		}
	}
	cout << str1 << endl;
	system("pause");
	return 0;
}