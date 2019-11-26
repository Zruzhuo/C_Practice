#include<iostream>
using namespace std;

int count(int n)
{
	int sum = 0;
	for (int i = 1; i < n; ++i)
	{
		if (n%i == 0)
			sum += i;
	}
	if (sum == n)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	while (cin >> n)
	{
		int x = 0;
		for (int i = 1; i < n; ++i)
		{
			x += count(i);
		}
		cout << x << endl;
	}
	return 0;
}