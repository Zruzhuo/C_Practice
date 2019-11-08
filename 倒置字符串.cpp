#include <iostream> 
#include <string> 
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	reverse(str.begin(), str.end());
	auto start = str.begin();
	while (start != str.end())
	{
		auto end = start;
		while (end != str.end() && *end != ' ')
		{
			++end;
		}
		reverse(start, end);
		if (end != str.end())
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	cout << str << endl;
	system("pause");
	return 0;
}