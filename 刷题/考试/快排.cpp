#include <iostream>
#include <assert.h>
#include<vector>
#include<algorithm>
#include <string>
#include<stack>
#include <set>
using namespace std;

bool cmp(vector<int> x, vector<int> y) {
	return x[1] < y[1];
}

int eraseOverlapIntervals(vector<vector<int> >& a) {
	if (a.empty()) return 0;
	sort(a.begin(), a.end(), cmp);
	int last = a[0][1], ret = 0;
	for (int i = 1; i < a.size(); ++i) {
		if (a[i][0] < last) {
			++ret;
		}
		else {
			last = a[i][1];
		}
	}
	return ret;
}












//int c[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
//int row, col;
//int dfs(vector<vector<int>>& arr, int n, int m, vector<vector<int>>& tmp) {
//	if (tmp[n][m] != 0) return tmp[n][m];
//	++tmp[n][m];
//	for (int* i : c) {
//		int N = n + i[0], M = m + i[1];
//		if (N >= 0 && N < row && M >= 0 && M < col && arr[N][M] > arr[n][m]) {
//			tmp[n][m] = max(tmp[n][m], dfs(arr, N, M, tmp) + 1);
//		}
//	}
//	return tmp[n][m];
//}
//int long_num(vector<vector<int>>& arr) {
//	if (arr.empty() || arr[0].empty()) return 0;
//	row = arr.size();
//	col = arr[0].size();
//	vector<vector<int>> tmp(row, vector<int>(col, 0));
//	int ret = 0;
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j) {
//			ret = max(ret, dfs(arr, i, j, tmp));
//		}
//	}
//	return ret;
//}
//int main() {
//	int N, M;
//	while (cin >> N >> M) {
//	
//		vector<vector<int>> arr(N, vector<int>(M));
//		for (int i = 0; i < N; ++i) {
//			for (int j = 0; j < M; ++j) {
//				cin >> arr[i][j];
//			}
//		}
//		cout << long_num(arr) << endl;
//	}
//	return 0;
//}





















//string compressString(string s) {
//	string ret;
//	int count = 1;
//	for (int i = 0; i < s.length(); ++i) {
//		if (s[i] == s[i + 1]) {
//			++count;
//		}
//		else {
//			ret.push_back(s[i]);
//			if (count != 1) {
//				ret.push_back(count + '0');
//			}
//			else {
//				ret.push_back(1 + '0');
//			}
//			count = 1;
//		}
//	}
//	if (ret.length() >= s.length()) {
//		return s;
//	}
//	else {
//		return ret;
//	}
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	cout << compressString(s) << endl;
//	system("pause");
//	return 0;
//
//}
//
//
//int findDuplicateNum(int* arr, int len) {
//	if (len > 1) {
//		int s = arr[0], f = arr[arr[0]];;
//		while (s != f) {
//			s = arr[s];
//			f = arr[arr[f]];
//		}
//		f = 0;
//		while (s != f) {
//			s = arr[s];
//			f = arr[f];
//		}
//		return s;
//	}
//	return -1;
//}
//
//











//#include<iostream>
//using namespace std;
//
//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int Mid_Num(int* a, int left, int right)
//{
//	int mid = left + (right - left) / 2;
//	if (a[left] < a[mid])
//	{
//		if (a[mid] < a[right])
//		{
//			return mid;
//		}
//		else if (a[left] > a[right])
//		{
//			return left;
//		}
//		else
//		{
//			return right;
//		}
//	}
//	else
//	{
//		if (a[mid] > a[right])
//		{
//			return mid;
//		}
//		else if (a[left] < a[right])
//		{
//			return left;
//		}
//		else
//		{
//			return right;
//		}
//
//	}
//}
//int Q_Sort(int* a, int left, int right)
//{
//	int mid = Mid_Num(a, left, right);
//	swap(&a[left], &a[mid]);
//	int key = a[left];
//	int key_index = left;
//	while (left < right)
//	{
//		while (left < right && a[right] >= key)
//		{
//			--right;
//		}
//		while (left < right && a[left] <= key)
//		{
//			++left;
//		}
//		swap(&a[left], &a[right]);
//		if (left < right)
//		{
//			++left;
//			--right;
//		}
//	}
//	swap(&a[left], &a[key_index]);
//	return left;
//}
//
//void Sort(int* a, int left, int right)
//{
//	if (left >= right) return;
//	int key_index = Q_Sort(a, left, right);
//	Sort(a, left, key_index - 1);
//	Sort(a, key_index + 1, right);
//}
