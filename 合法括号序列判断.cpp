#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool chkParenthesis(string A, int n) {
	if (n % 2 != 0)
		return false;
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (A[i] == '(')
		{
			++count;
		}
		else if (A[i] == ')')
		{
			--count;
		}
		else
		{
			return false;
		}
	}
	if (count == 0)
		return true;
	return false;
}
int main()
{
	string A(")(())(");
	cout << chkParenthesis(A, A.size()) << endl;
	system("pause");
	return 0;
}