#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 0;
	int i = 0;
	while (cin >> n)
	{
		long long ret = 0;
		vector<int> A;
		A.resize(n + 1);
		A[n] = 0;
		for (i = 0; i < n; ++i)
		{
			cin >> A[i];
		}
		i = 0;
		while(i < n)
		{
			if (A[i] < A[i + 1])
			{
				while (i < n && A[i] <= A[i + 1])
				{
					++i;
				}
				++i;
				++ret;
			}
			else if (A[i] == A[i + 1])
			{
				++i;
			}
			else if (A[i] > A[i + 1])
			{
				while (i < n && A[i] >= A[i + 1])
				{
					++i;
				}
				++ret;
				++i;
			}
		}
		cout << ret << endl;
	}
	system("pause");
	return 0;
}