#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int StrToInt(string str) {
	int len = str.size();
	if (len <= 0)
		return 0;
	int ret = 0;
	int flag = 1;
	if (str[0] == '-')
		flag = -1;
	int tmp = 0;
	for (int i = (str[0] == '+' || str[0] == '-') ? 1 : 0; i < len; ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tmp = (int)(str[i] - '0');
			for (int j = 0; j < len - i - 1; ++j)
			{
				tmp *= 10;
			}
			ret += tmp;
		}
		else
		{
			return 0;
		}
	}
	return ret * flag;

}
int main()
{
	string str("4321");
	cout << StrToInt(str) <<endl;
	system("pause");
	return 0;
}