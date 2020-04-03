#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
long countDolphin(int n, int m, vector < int > birthYear, int x) {
	long ret;
	vector<int> age;
	for (int i = n; i > 0; --i) {
		age.push_back(0);
	}
	for (int year = 1; year <= x; ++year) {
		for (int j = 0; j < age.size(); ++j) {
			++age[j];
		}
		for (int j = 0; j < birthYear.size(); ++j) {
			for (int i = 0; i < age.size(); ++i) {
				if (birthYear[j] == age[i]) {
					age.push_back(0);
				}
			}
		}
		vector<int>::iterator it = age.begin();
		while (it != age.end()) {
			if (*it > m) {
				age.erase(it);
			}
		}
	}
	ret = age.size();
	return ret;
}
/******************************结束写代码******************************/


int main() {
	long res;

	int _n;
	cin >> _n;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	int _m;
	cin >> _m;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	int _birthYear_size = 0;
	cin >> _birthYear_size;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	vector<int> _birthYear;
	int _birthYear_item;
	for (int _birthYear_i = 0; _birthYear_i < _birthYear_size; _birthYear_i++) {
		cin >> _birthYear_item;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		_birthYear.push_back(_birthYear_item);
	}


	int _x;
	cin >> _x;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



	res = countDolphin(_n, _m, _birthYear, _x);
	cout << res;

	return 0;

}
