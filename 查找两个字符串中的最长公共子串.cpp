#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		if (a.length() < b.length())
			swap(a, b);
		int lenA = a.length();
		int lenB = b.length();
		vector<vector<int>> db(lenA + 1, vector<int>(lenB + 1, 0));
		int maxlen = 0, it = 0;
		for (int i = 1; i <= lenA; ++i)
		{
			for (int j = 1; j <= lenB; ++j)
			{
				if (a[i - 1] == b[j - 1])
				{s
					db[i][j] = db[i - 1][j - 1] + 1;
					if (db[i][j] > maxlen)
					{
						maxlen = db[i][j];
						it = i - maxlen;
					}
				}
			}
		}
		cout << a.substr(it, maxlen) << endl;
	}
	return 0;
}