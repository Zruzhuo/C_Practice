#include<iostream>
#include<string>

using namespace std;

int main()
{
	string A, B;
	cin >> A;
	cin >> B;
	string tmp;
	size_t count = 0;
	for (size_t i = 0; i <= A.size(); ++i)
	{
		tmp = A;
		tmp.insert(i, B);
		auto start = tmp.begin();
		auto last = tmp.end() - 1;	
		while (start < last)
		{
			if (*start == *last)
			{
				++start;
				--last;
			}
			else
			{
				break;
			}
		}
		if (start >= last)
		{
			++count;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}