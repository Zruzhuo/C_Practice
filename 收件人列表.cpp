#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	while (cin >> n) {
		cin.get();
		string str;
		for (int i = 0; i < n; ++i) {
			getline(cin, str);
			if (str.find(' ') != -1 || str.find(',') != -1) {
				cout << '"' << str << '"';
			}
			else {
				cout << str;
			}
			if (i == n - 1) {
				cout << endl;
			}
			else {
				cout << ',' << ' ';
			}
		}
	}
	system("pause");
	return 0;
}