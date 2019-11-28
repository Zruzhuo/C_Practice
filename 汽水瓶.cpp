#include<iostream>
using namespace std;

int main()
{
	int n = 0, i = 0;
	int arr[10];
	while (cin >> n && n != 0)
	{
		int soda = 0;
		while (n > 1)
		{
			if (n == 2)
			{
				soda++;
				break;
			}
			soda += n / 3;
			n = n % 3 + n / 3;
		}
		arr[i] = soda;
		++i;
	}
	for (int j = 0; j < i; ++j)
	{
		cout << arr[j] << endl;
	}
	return 0;
}