#include<iostream>
using namespace std;

int Add(int num1, int num2)
{
	int sum = 0, carry = 0;
	while (num2 != 0) {
		sum = num1 ^ num2;
		carry = (num1 & num2) << 1;
		num1 = sum;
		num2 = carry;
	}
	return num1;
}
int main()
{
	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;
	cout << Add(num1, num2) << endl;
	return 0;
}