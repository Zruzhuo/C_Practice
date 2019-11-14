#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr;
	arr.resize(4);
	for (size_t i = 0; i < 4; ++i)
	{
		cin >> arr[i];
	}
	int A = 0, B = 0, C = 0;
	if (((arr[0] + arr[2]) % 2 != 0) || ((arr[1] + arr[3]) % 2 != 0))
	{
		cout << "No" << endl;
		return 0;
	}
	A = ((arr[0] + arr[2]) / 2);
	B = ((arr[1] + arr[3]) / 2);
	if (((arr[1] + arr[3]) / 2) - arr[1] != arr[3] - ((arr[1] + arr[3]) / 2))
	{
		cout << "No" << endl;
		return 0;
	}
	C = B - arr[1];
	if ((A - B != arr[0]) || (B - C != arr[1]) || (A + B != arr[2]) || (B + C != arr[3]))
	{
		cout << "No" << endl;
		return 0;
	}	
	cout << A << ' ' << B << ' ' << C << endl;
 	system("pause");
	return 0;
}