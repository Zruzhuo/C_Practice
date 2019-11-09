#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int MoreThanHalfNum_Solution(vector<int> a) {
	size_t len = a.size();
	size_t max = 1;
	sort(a.begin(), a.end());
	size_t i = len / 2 + 1;
	while (a[i] == a[len / 2])
	{
		++max;
		++i;
	}
	i = len / 2 - 1;
	while (a[i] == a[len / 2])
	{
		++max;
		++i;
	}
	return max > len / 2 ? a[len/2] : 0;
}
int main()
{
	vector<int> numbers;
	numbers.push_back(3);
	numbers.push_back(2);
	numbers.push_back(1);
	numbers.push_back(3);
	numbers.push_back(3);
	numbers.push_back(3);
	cout << MoreThanHalfNum_Solution(numbers) << endl;
	system("pause");
	return 0;
}