#include<iostream>
#include<string>
using namespace std;

int main()
{
	string passWard;
	while (getline(cin, passWard)) {
		auto it = passWard.begin();
		while (it != passWard.end()) {
			if (*it >= 'A' && *it <= 'E') {
				*it += 21;
			}
			else if (*it >= 'F' && *it <= 'Z') {
				*it -= 5;
			}
			++it;
		}
		cout << passWard << endl;
	}
	return 0;
}