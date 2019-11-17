#include<iostream>

using namespace std;

int addAB(int A, int B) {
	int ret = 0;
	while (A != 0)
	{
		ret++;
		A--;
	}
	while (B != 0)
	{
		ret++;
		B--;
	}
	return ret;
}
int main()
{
	cout << addAB(4, 5) << endl;
	system("pause");
	return 0;
}