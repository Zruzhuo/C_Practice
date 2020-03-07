#include<iostream>
using namespace std;

int main()
{
	int n;
	float ret;
	long a[25] = {0, 0, 1, 2};//错误的情况个数
	long b[25] = {0, 1};//所有情况个数
	for (int i = 4; i < 21; ++i) {
		a[i] = (i - 1)*(a[i - 1] + a[i - 2]);
	}
	for (int i = 2; i < 21; ++i) {
		b[i] = b[i - 1] * i;
	}
	while (cin >> n) {
		ret = 1.0 * a[n] / b[n] * 100;
		printf("%0.2f%%\n", ret);
	}
	system("pause");
	return 0;
}