#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, m, f;
	int ret = 1;
	cin >> n >> m >> f;
	vector<int> v;
	v.push_back(f);
	while (m--) {
		int q; 
		int r = 0;
		cin >> q;
		vector<int> a(q);
		for (int i = 0; i < q; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < q; ++i) {
			for (int j = 0; j < v.size(); ++j) {
				if (a[i] == v[j]) {
					r++;
					v.erase(find(v.begin(), v.end(), a[i]));
				}
			}
		}
		if (r != 0) {
			for (int i = 0; i < q; ++i) {
				v.push_back(a[i]);
			}
			ret += (q - r);
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}