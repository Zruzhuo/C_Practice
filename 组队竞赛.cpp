#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	size_t  n;
	long long sum = 0;
	vector<int> arr;
	cin >> n;
	arr.resize(n * 3);
	for (size_t i = 0; i < 3 * n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = n; i < 3 * n; i += 2)
	{
		sum += arr[i];
	}
	cout << sum << endl;
	system("pause");
	return 0;
}