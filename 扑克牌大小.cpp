#include<iostream>
#include<string>
using namespace std;

int main()
{
	string brand;
	brand.resize(25);
	cin >> brand;
	string str1, str2;
	str1.resize(5);
	str2.resize(5);
	auto it = brand.begin();
	int i = 0;
	while (*it != '-')
	{
		str1[i] = *it;
		++i;
	}
	i = 0;
	++it;
	while (*it != '\0')
	{
		str2[i] = *it;
		++i;

	}
	if (str1.size() == str2.size() == 5)
	{
		if (str1[0] != str1[2] || str2[0] != str2[2])
		{

		}
	}
	if (str1[str1.size() - 1] > str2[str2.size() - 1])
		return
	return 0;
}