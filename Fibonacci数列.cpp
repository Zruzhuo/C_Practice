#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	vector<int> arr;
	arr.resize(N);
	arr[0] = 0;
	arr[1] = 1;
	int i = 1;
	while (arr[i] < N)
	{
		++i;
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << ((arr[i] - N) > (N - arr[i - 1]) ? (N - arr[i - 1]) : (arr[i] - N)) << endl;
	system("pause");
	return 0;
}