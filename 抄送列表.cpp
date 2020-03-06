#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str)) {
		vector<string> names;
		int pos = 0;
		while (pos < str.length()) {
			if (str[pos] == '\"') {
				int end = str.find('\"', pos + 1);
				names.push_back(str.substr(pos + 1, end - pos - 1));
				pos = end + 2;
			}
			else {
				int end = str.find(",", pos + 1);
				if (end == -1) {
					names.push_back(str.substr(pos, str.size() - pos));
					break;
				}
				names.push_back(str.substr(pos, end - pos));
				pos = end + 1;
			}
			getline(cin, str);
			if (names.end() == find(names.begin(), names.end(), str)) {
				cout << "Important" << endl;
			}
			else {
				cout << "Ignore" << endl;
			}
		}
	}
	system("pause");
	return 0;
}