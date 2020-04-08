#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	int ret = 0;
	int count = 1;
	vector<int> money(n);
	vector<int> num(n);
	vector<int> mm;
	for (int i = 0; i < n; ++i) {
		cin >> money[i] >> num[i];
	}
	vector<int>::iterator mit = money.begin();
	vector<int>::iterator nit = num.begin();
	while (n--) {
		if (*nit != 0) {
			ret += *mit;
			count--;
			count += *nit;
		}
		else {
			mm.push_back(*mit);
		}
		++mit;
		++nit;
	}
	sort(mm.begin(), mm.end(), greater<int>());
	for (int i = 0; i < count; ++i) {
		ret += mm[i];
	}
	cout << ret << endl;
	system("pause");
	return 0;
}