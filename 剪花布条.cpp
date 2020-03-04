#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s, t;
	while (cin >> s >> t) {
		int ret = 0;
		size_t i = 0;
		while ((i = s.find(t, i)) != -1) {
			i += t.size();
			ret++;
		}
		cout << ret << endl;
	}
	system("pause");
	return 0;
}