#include<iostream>

using namespace std;

size_t test(size_t n, size_t m)
{
	size_t ret = 1;
	for (size_t i = 0; i < m; ++i)
	{
		ret *= n - i;
	}
	for (size_t i = 1; i <= m; ++i)
	{
		ret /= i;
	}
	return ret;
}
int main()
{
	size_t n = 0, m = 0;
	while (cin >> n >> m)
	{
		cout << test(n + m, n) << endl;
	}
	system("pause");
	return 0;
}