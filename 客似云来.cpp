#include<iostream>
using namespace std;

int main()
{
	int from, to;
	while (cin >> from >> to) {
		int fib[81];
		fib[0] = 0;
		fib[1] = 1;
		long ret = 0;
		for (int i = 2; i < 81; ++i) {
			fib[i] = fib[i - 2] + fib[i - 1];
		}
		for (int i = from; i <= to; ++i) {
			ret += fib[i];
		}
		cout << ret << endl;
	}
	system("pause");
	return 0;
}