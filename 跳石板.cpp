#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void GetYueShu(int n, vector<int> &yueshu)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			yueshu.push_back(i);
			if (n / i != i)
				yueshu.push_back(n / i);
		}
	}
}


int main()
{
	int N = 0, M = 0;
	cin >> N >> M;
	vector<int> res(M + 1, 0);
	res[N] = 1;

	for (int i = N; i < M; i++)
	{
		vector<int> yueshu;

		if (res[i] == 0)
			continue;

		GetYueShu(i, yueshu);

		for (size_t j = 0; j < yueshu.size(); j++)
		{
			if ((yueshu[j] + i) <= M && res[yueshu[j] + i] != 0)
				res[yueshu[j] + i] = (res[yueshu[j] + i] > res[i] + 1) ? res[i] + 1 : res[yueshu[j] + i];
			else if ((yueshu[j] + i) <= M)
				res[yueshu[j] + i] = res[i] + 1;
		}
	}

	if (res[M] == 0)
		cout << -1 << endl;
	else
		cout << res[M] - 1 <<endl;
	system("pause");
	return 0;
}