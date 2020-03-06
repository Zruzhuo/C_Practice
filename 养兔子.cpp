#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	while (cin >> n) {
		long fib[91] = { 0, 1, 2 };
		for (int i = 3; i < 91; i++) {
			fib[i] = fib[i - 2] + fib[i - 1];
		}
		cout << fib[n] << endl;
	}
	system("pause");
	return 0;
}