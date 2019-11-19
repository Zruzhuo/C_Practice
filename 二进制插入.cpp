#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int binInsert(int n, int m, int j, int i) {
	int ret = 0;
	vector<int> arr_n;
	arr_n.resize(32);
	vector<int> arr_m;
	arr_m.resize(32);
	for (int x = 0; x < 32; ++x)
	{
		arr_n[x] = n & 1;
		n = n >> 1;
	}
	for (int x = 0; x < 32; ++x)
	{
		arr_m[x] = m & 1;
		m = m >> 1;
	}
	for (int x = 0; j <= i; ++j, ++x)
	{
		arr_n[j] = arr_m[x];
	}
	for (int x = 0; x < 32; ++x)
	{
		ret += (arr_n[x] * (pow(2, x)));
	}
	return ret;
}
int main()
{
	int n = 0, m = 0, j = 0, i = 0;
	cin >> n >> m >> j >> i;	
	cout << binInsert(n,m,j,i) << endl;
	system("pause");
	return 0;
}