#include<iostream>

using namespace std;

int getLCA(int a, int b)
{
	if (a == b || a == b / 2)
		return a;
	if (b == a / 2)
		return b;
	while (a != b)
	{
		if (a > b)
			a /= 2;
		if (a < b)
			b /= 2;
	}
	return a;
}
int main()
{
	cout << getLCA(2, 3) << endl;
	system("pause");
	return 0;
}