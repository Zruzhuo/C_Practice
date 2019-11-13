#include<iostream>
#include<vector>

using namespace std;

int main()
{
	size_t N = 0;
	cin >> N;
	vector<int> a;
	a.resize(N);
	size_t i = 0;
	for (i = 0; i < N; ++i)
	{
		cin >> a[i];
	}
	long long max = a[0];
	long long sum = a[0];
	for (i = 1; i < N; ++i)
	{
		if (sum <= 0)
		{
			sum = a[i];
		}
		else
		{
			sum += a[i];
		}
		if (sum > max)
		{
			max = sum;
		}
	}
	cout << max << endl;
	system("pause");
	return 0;
}