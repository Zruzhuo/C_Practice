#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0, count = 0, max = 0, ret = 0;
	vector<int> gifts;
	cin >> n;
	gifts.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> gifts[i];
	}
	sort(gifts.begin(), gifts.end());
	for (int i = 0; i < n - 1; ++i)
	{
		if (gifts[i] == gifts[i + 1])
		{
			count++;
		}
		else
		{
			count = 1;
			
		}
		if (count > max)
		{
			max = count;
			ret = gifts[i + 1];
		}		
	}
	if (max > n / 2)
		cout << ret << endl;
	else
		cout << 0 << endl;
	return 0;
}