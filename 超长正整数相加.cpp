#include<iostream>
#include<string>
using namespace std;

int main()
{
	string addend, augend;
	cin >> addend >> augend;
	auto it = addend.begin();
	while (addend.size() != augend.size())
	{
		if (addend.size() > augend.size())
		{
			augend.insert(it, 0);
			++it;
		}
		else
		{
			addend.insert(it, 0);
			++it;
		}
	}
	int i = 0;
	for (i = addend.size() - 1; i >= 0; --i)
	{
		addend[i] += augend[i];
		if (addend[i] > 9)
		{
			addend[i] -= 10;
			addend[i - 1] += 1;
		}
	}
	if (addend[i] > 9)
	{
		addend[i] -= 10;
		addend.insert(addend.begin(), 1);
	}
	cout << addend << endl;
	return 0;
}