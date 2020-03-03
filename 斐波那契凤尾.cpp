#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	long a[100001] = { 1,1 };
	for (int i = 2; i <= 100000; ++i) {
		a[i] = (a[i - 1] + a[i - 2]) % 1000000;
	}
	while (cin >> n) {
		cout << a[n] << endl;
	}
	system("pause");
	return 0;
}