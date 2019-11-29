#include<iostream>
using namespace std;

int rabbitAdd(int month)
{
	if (month < 3)
		return 1;
	else
		return rabbitAdd(month - 1) + rabbitAdd(month - 2);
}
int main()
{
	int month = 0;
	cin >> month;
	cout << rabbitAdd(month) << endl;
	return 0;
}