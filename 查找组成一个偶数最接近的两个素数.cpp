#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool is_prime(int a)
{
	for (int i = 2; i < sqrt(a); ++i)
	{
		if (a % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n = 0;	
	while(cin >> n)
	{
		vector<int> arr;
		for (int i = 1; i <= n / 2; ++i)
		{
			if (is_prime(i) && is_prime(n - i))
			{
				arr.push_back(i);
				arr.push_back(n - i);
			}
		}
		cout << arr[arr.size() - 2] << endl;
		cout << arr[arr.size() - 1] << endl;
	}
	system("pause");
	return 0;
}