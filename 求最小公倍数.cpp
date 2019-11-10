#include<iostream>

using namespace std;

int main()
{
	size_t A = 0, B = 0;
	cin >> A >> B;
	size_t ret = 0;
	size_t maxyue = 1;
	if (A < B)
		swap(A, B);
	for (size_t i = B; i > 1; --i)
	{
		if (A%i == 0 && B%i == 0)
		{
			if (i > maxyue)
			{
				maxyue = i;
			}
		}
	}
	ret = (A*B) / maxyue;
	cout << ret << endl;
	system("pause");
	return 0;
}