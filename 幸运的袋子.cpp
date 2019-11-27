#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n = 0;
int* bag = nullptr;
int luckbag(int pos, int mid, long long p)
{
	int count = 0;
	for (int i = pos; i < n; ++i)
	{
		mid += bag[i];
		p *= bag[i];
		if (mid > p)
			count += 1 + luckbag(i + 1, mid, p);
		else if (bag[i] == 1)
			count += luckbag(i + 1, mid, p);
		else
			break;
		mid -= bag[i];
		p /= bag[i];
		while (bag[i + 1] == bag[i] && i + 1 < n)
		{
			++i;
		}
	}
	return count;
}
int main()
{
	int count = 0, mid = 0;
	long long p = 1;
	cin >> n;
	bag = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> bag[i];
	}
	sort(bag, bag + n);
	count = luckbag(0, mid, p);
	cout << count << endl;
	if (bag == nullptr)
	{
		delete bag;
		bag = nullptr;
	}		
	system("pause");
	return 0;
}