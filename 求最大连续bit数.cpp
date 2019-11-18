#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		int max = 0;
		int count = 0;
		while (n)
		{
			if (n & 1 == 1)
			{
				++count;
				if (count > max)
					max = count;
			}
			else
			{
				count = 0;
			}
			n = n >> 1;
		}
		cout << max << endl;
	}
	system("pause");
	return 0;
}