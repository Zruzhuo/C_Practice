#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		int count = 0;
		while (n != 0)
		{
			if (n & 1 == 1)
				++count;
			n = n >> 1;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}