#include<iostream>
using namespace std;

int main()
{
	double n = 0, r = 0;
	while (cin >> n >> r)
	{
		if (2 * 3.14 * r < n)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}