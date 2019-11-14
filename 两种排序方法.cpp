#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n = 0, flag1 = 0, flag2 = 0;
	cin >> n;
	vector<string> a;
	a.resize(n);
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (i = 0; i < n - 1; ++i)
	{
		int j = 0;
		while (j < a[i].size())                           
		{
			if (a[i][j] > a[i + 1][j])
			{
				flag1 = -1;
				break;
			}
			else if (a[i][j] == a[i + 1][j])
				++j;
			else
				break;
		}
		if (a[i].size() > a[i + 1].size())
			flag2 = -1;
	}
	if (flag1 == 0 && flag2 == 0)
		cout << "both" << endl;
	else if (flag1 == -1 && flag2 == -1)
		cout << "none" << endl;
	else if (flag1 == -1 && flag2 == 0)
		cout << "lengths" << endl;
	else if (flag1 == 0 && flag2 == -1)
		cout << "lexicographically" << endl;
	system("pause");
	return 0;
}