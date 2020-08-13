#include <iostream>
#include <assert.h>
#include<vector>
#include<algorithm>
#include <string>
#include<stack>
#include <map>
using namespace std;
char p[4] = { '+', '-', '*', '/' };

int fun(int a, int b, int p) {
	int res;
	switch (p) {
		case 0:
			res = a + b;
			break;
		case 1:
			res = a - b;
			break;
		case 2:
			res = a * b;
			break;
		case 3:
			if (b != 0)
			res = a / b;
			break;
	}
	return res;
		

}
int fun1(int a, int b, int c, int d, int p1, int p2, int p3) {
	return fun(fun(fun(a, b, p1), c, p2), d, p3);
}
int fun2(int a, int b, int c, int d, int p1, int p2, int p3) {
	return fun(fun(a, fun(b, c, p2), p1), d, p3);
}
int fun3(int a, int b, int c, int d, int p1, int p2, int p3) {
	return fun(a, fun(b, fun(c, d, p3), p2), p1);
}
int fun4(int a, int b, int c, int d, int p1, int p2, int p3) {
	return fun(a, fun(fun(b, c, p2), d, p3), p1);
}
int fun5(int a, int b, int c, int d, int p1, int p2, int p3) {
	return fun(fun(a, b, p1), fun(c, d, p3), p2);
}



bool Game24Points(int* arr, int arrLen) {
	int a = arr[0], b = arr[1], c = arr[2], d = arr[3];
	int flag = 0;
	for (int p1 = 0; p1 < 4; ++p1) {
		for (int p2 = 0; p2 < 4; ++p2) {
			for (int p3 = 0; p3 < 4; ++p3) {
				if (fun1(a, b, c, d, p1, p2, p3) == 24) {
					flag = 1;
				}
				if (fun2(a, b, c, d, p1, p2, p3) == 24) {
					flag = 1;
				}
				if (fun3(a, b, c, d, p1, p2, p3) == 24) {
					flag = 1;
				}
				if (fun4(a, b, c, d, p1, p2, p3) == 24) {
					flag = 1;
				}
				if (fun5(a, b, c, d, p1, p2, p3) == 24) {
					flag = 1;
				}
			}
		}
	}
	return flag;
}











//int jia(int x, int y) {
//	return x + y;
//}
//int jian(int x, int y) {
//	return x - y;
//}
//int cheng(int x, int y) {
//	return x * y;
//}
//int chu(int x, int y) {
//	if (y == 0) return -1;
//	return x / y;
//}
//int(*p[4])(int, int) = {jia,jian,cheng,chu};
//bool Game24Points(int* arr, int arrLen) {
//	int x = arr[0], y = arr[1], z = arr[2], m = arr[3];
//	for (int i = 0; i < 4; ++i) {
//		for (int j = 0; j < 4; ++j) {
//			for (int s = 0; s < 4; ++s) {
//				int ret = 0;
//
//				ret = p[s](p[j](p[i](x, y), z), m);
//				if (ret == 24) return true;
//
//				ret = p[s](p[j](x, p[i](y, z)), m);
//				if (ret == 24) return true;
//
//				ret = p[s](x, p[j](p[i](y, z), m));
//				if (ret == 24) return true;
//
//				ret = p[s](p[i](x, y), p[j](z, m));
//				if (ret == 24) return true;
//
//				ret = p[s](x, p[j](y, p[i](z, m)));
//				if (ret == 24) return true;
//			}
//		}
//	}
//	return false;
//}
//int main() {
//	int arr[4] = { 7,2,1,10 };
//	cout << Game24Points(arr, 4);
//	system("pause");
//	return 0;
//}
 
//int GetCoinCount(int N) {
//	int money = 1024 - N, count = 0;
//	int a[4] = { 64, 16, 4, 1 };
//	int i = 0;
//	while (money) {
//		count += (money / a[i]);
//		money %= a[i];
//		++i;
//	}
//	return count;
//}
//
//int main() {
//	cout << GetCoinCount(200) << endl;
//	system("pause");
//	return 0;
//}











//bool IsValidExp(string s) {
//	int len = s.size(), flag = 1;
//	stack<char> k;
//	for (int i = 0; i < len; ++i) {
//		if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
//			k.push(s[i]);
//		}
//		else {
//			if (k.empty()) {
//				flag = 0;
//				break;
//			}
//			char tmp = k.top();
//			k.pop();
//
//			if (s[i] == ')' && (tmp == '[' || tmp == '{')) {
//				flag = 0;
//				break;
//			}
//			else if (s[i] == '}' && (tmp == '(' || tmp == '[')) {
//				flag = 0;
//				break;
//			}
//			else if (s[i] == ']' && (tmp == '(' || tmp == '{')) {
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (!k.empty()) {
//		flag = 0;
//	}
//	if (flag == 1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}


























//int main() {
//	while (1) {
//		string w1, w2;
//		cin >> w1 >> w2;
//		int len1 = w1.size(), len2 = w2.size();
//		vector<vector<int>> f(len1 + 1, vector<int>(len2 + 1));
//		for (int i = 0; i <= len1; ++i) f[i][0] = i;
//		for (int j = 0; j <= len2; ++j) f[0][j] = j;
//		for (int i = 1; i <= len1; ++i) {
//			for (int j = 1; j <= len2; ++j) {
//				int flag = w1[i - 1] == w2[j - 1] ? 0 : 1;
//				int del = f[i - 1][j] + 1;
//				int ins = f[i][j - 1] + 1;
//				int sub = f[i - 1][j - 1] + flag;
//				int tmp = min(del, ins);
//				f[i][j] = min(tmp, sub);
//			}
//		}
//		cout << f[len1][len2] << endl;
//	}
//	system("pause");
//	return 0;
//}
//void fun(map<int, string>& m) {
//	auto it = m.begin();
//	while (it != m.end()) {
//		int key = it->first;
//		if (key % 2 == 0) {
//			it = m.erase(it);
//		}
//		else {
//			cout << it->second << endl;
//			++it;
//		}
//	}
//}

//int main() {
//	union u{
//		short i;
//		char c;
//	}u;
//	u.i = 1;
//	if ((int)u.c == 1) {
//		cout << "xiao" << endl;
//	}
//	else {
//		cout << "da" << endl;
//	}
//	system("pause");
//	return 0;
//}

//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void BubbleSort(int* a, int n) {
//	for (int i = 0; i < n - 1; ++i) {
//		for (int j = 0; j < n - i - 1; ++j) {
//			if (a[j] > a[j + 1]) {
//				swap(&a[j], &a[j + 1]);
//			}
//		}
//	}
//}
//void InsertSort(int* a, int n) {
//	for (int i = 1; i < n; ++i) {
//		int j = i;
//		while (j > 0 && a[j] < a[j - 1]) {
//			swap(&a[j], &a[j - 1]);
//			--j;
//		}
//	}
//}void SelectSort(int* a, int n) {
//	int max, min;
//	int begin = 0, end = n - 1;
//	while(begin <= end) {
//		max = min = begin;
//		for (int j = begin + 1; j < end; ++j) {
//			if (a[j] > a[max]) {
//				max = j;
//			}
//			if (a[j] < a[min]) {
//				min = j;
//			}
//		}
//		if (min != begin) {
//			swap(&a[min], &a[begin]);
//		}
//		if (max != end) {
//			swap(&a[max], &a[end]);
//		}
//		++begin;
//		--end;
//	}
//}
//void AdjustDown(int* a, int n, int parent) {
//	assert(a);
//	int child = parent * 2 + 1;
//	while (child < n) {
//		if ((child + 1) < n && a[child] < a[child + 1]) {
//			child++;
//		}
//		if (a[parent] < a[child]) {
//			swap(&a[parent], &a[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else {
//			break;
//		}
//	}
//}
//void HeapSort(int* a, int n) {
//	for (int i = (n - 2) / 2; i >= 0; --i) {
//		AdjustDown(a, n, i);
//	}
//	int end = n - 1;
//	while (end) {
//		swap(&a[0], &a[end]);
//		AdjustDown(a, end, 0);
//		--end;
//	}
//}
//int GetMidIndex(int* a, int left, int right) {
//	int mid = left + (right - left) / 2;
//	if (a[left] < a[mid]) {
//		if (a[right] > a[mid]) {
//			return mid;
//		}
//		else if(a[right] < a[left]){
//			return left;
//		}
//		else {
//			return right;
//		}
//	}
//	else {
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
//	}
//}
//int PartSort(int* a, int left, int right) {
//	int mid = GetMidIndex(a, left, right);
//	swap(&a[left], &a[mid]);
//	int key = a[left];
//	int key_index = left;
//	while (left < right) {
//		while (left < right && a[right] >= key) {
//			--right;
//		}
//		while (left < right && a[left] <= key) {
//			++left;
//		}
//		swap(&a[left], &a[right]);
//		if (left < right) {
//			++left;
//			--right;
//		}
//	}
//	swap(&a[left], &a[key_index]);
//	return left;
//}
//void QuickSort(int* a, int left, int right) {
//	if (left >= right) return;
//	if (right - left + 1 > 10) {
//		int key_index = PartSort(a, left, right);
//		QuickSort(a, left, key_index - 1);
//		QuickSort(a, key_index + 1, right);
//	}
//	else {
//		InsertSort(a + left, right - left + 1);
//	}
//}
//int main()
//{
//	int array[10] = { 0, 2, 1, 9, 6, 0, 5, 8, 4, 7 };
//	QuickSort(array, 0, 9);
//	for (auto e : array) {
//		cout << e << endl;
//	}
//	system("pause");
//	return 0;
//}

  //struct TreeNode {
 	//int val;
 	//struct TreeNode *left;
 	//struct TreeNode *right;
  //};


//int subtraction_of_leaves(TreeNode* root) {
//	if (root || (!root->left && !root->right)) return 0;
//	stack<TreeNode*> s;
//	s.push(root);
//	int count = 0;
//	int num = 0;
//	while (!s.empty()) {
//		TreeNode* node = s.top();
//		s.pop();
//		count++;
//		if (node->left && !node->right) {
//			s.push(node->left);
//		}
//		if (node->right) {
//			s.push(node->right);
//		}
//		if (!node->left && !node->right) {
//			if (count % 2 == 0) {
//				num += node->val;
//			}
//			else {
//				num -= node->val;
//			}
//		}
//	}
//	return num;
//}



//string sub_strings(string num1, string num2) {
//	if (num1.empty()) return num2;
//	int i = num1.size() - 1, j = num2.size() - 1;
//	while (i >= 0) {
//		if (num1[i] <= num2[j]) {
//			num2[j] = num2[j] - num1[i] + '0';
//		}
//		else {
//			int f = j - 1;
//			while (num2[f] == '0') {
//				num2[f] += 9;
//				f--;
//			}
//			num2[f] -= 1;
//			num2[j] = num2[j] + 10 - num1[i] + '0';
//		}
//		i--;
//		j--;
//	}
//	auto it = num2.begin();
//	while (*it == '0' && it < num2.end() - 1) {
//		it = num2.erase(it);
//	}
//	return num2;
//}
//int main()
//{
//	string n1("91000000000000000000000000000000000000"); 
//	string n2("100000000000000000000000000");
//	cout << '"' << sub_strings(n2, n1) << '"' << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//class Point {
//private:
//	int x, y;
//public:
//	Point(int xval = 0, int yval = 0) :x(xval), y(yval){}
//	int getx() const { return x; }
//	int gety() const { return y; }
//	void setx(int xval) { x = xval; }
//	void sety(int yval) { y = yval; }
//};
//class C_P {
//private:
//	int count;
//	Point* p;
//	friend class S_ptr;
//	C_P(Point* ptr):p(ptr), count(1){}
//	~C_P() { delete p; }
//};
//
//class S_ptr {
//public:
//	S_ptr() { cp = nullptr; }
//	S_ptr(Point* ptr):cp(new C_P(ptr)){}
//	S_ptr(const S_ptr &sp) :cp(sp.cp) {
//		++cp->count;
//	}
//
//	S_ptr& operator=(const S_ptr& sp) {
//		++sp.cp->count;
//		if (cp != nullptr && --sp.cp->count == 0) {
//			delete cp;
//		}
//		cp = sp.cp;
//		return *this;
//	}
//	Point* operator->() {
//		return cp->p;
//	}
//	Point& operator*() {
//		return *(cp->p);
//	}
//	~S_ptr() {
//		if (--cp->count == 0) delete cp;
//	}
//private:
//	C_P* cp;
//};






















//string s_hw(string s) {
//	int n = s.size();
//	if (n <= 1) return s;
//	int m = 0;
//	while (m < n) {
//		int i = n - 1, j = m;
//		while (j < i && s[i] == s[j]) {
//			--i;
//			++j;
//		}
//		if (i <= j) break;
//		++m;
//	}
//	string ret = s.substr(0, m);
//	reverse(ret.begin(), ret.end());
//	return s + ret;
//}


//int find_second(int* arr, int len) {//找出数组中第二大的数字（不使用排序，只进行一次遍历）
//	int max = arr[0], sec = INT_MIN;
//	for (int i = 1; i < len; ++i) {
//		if (arr[i] > max) {
//			sec = max;
//			max = arr[i];
//		}
//		else if (arr[i] > sec) {
//			sec = arr[i];
//		}
//	}
//	return sec;
//}

//int atoi(const char* str) {//char转换为int类型
//	assert(str);
//	size_t n = strlen(str);
//	int num = 0;
//	str += n - 1;
//	size_t m = n;
//	while (n) {
//		if (*str >= '0' && *str <= '9') {
//			num += (*str - '0') * pow(10, m - n);
//		}
//		str--;
//		n--;
//	}
//	return num;
//}
//char* _strstr(char* s1, char* s2) {
//	assert(s1 && s2);
//	while (*s1) {
//		char* a = s1;
//		char* b = s2;
//		while (*a == *b && *a) {
//			++a;
//			++b;
//			if (*b == '\0') {
//				return s1;
//			}
//		}
//		++s1;
//	}
//	return nullptr;
//}
//
//char* _strcpy(char* s1, const char* s2) {
//	assert(s1 && s2);
//	char* a = s1;
//	while (*a++ = *s2++);
//	return s1;
//}
//
//char* _strncpy(char* s1, const char* s2, int num) {
//	assert(s1 && s2);
//	char* str = s1;
//	while (num-- && *s2) {
//		*s1++ = *s2++;
//	}
//	return str;
//}
//
//
//char* _strcat(char* s1, const char* s2) {
//	assert(s1 && s2);
//	char* str = s1;
//	while (*s1++);
//	while (*s1++ = *s2++);
//	return str;
//}
//
//char* _strncat(char* s1, const char* s2, int num) {
//	assert(s1 && s2);
//	char* str = s1;
//	while (*s1++);
//	while (num-- && s2) {
//		*s1++ = *s2++;
//	}
//	*s1 = '\0';
//	return str;
//}
//
//int _strcmp(const char* s1, const char* s2) {
//	assert(s1 && s2);
//	while (*s1 && *s2) {
//		if (*(unsigned char*)s1 < *(unsigned char*)s2) {
//			return -1;
//		}
//		if (*(unsigned char*)s1 > *(unsigned char*)s2) {
//			return 1;
//		}
//		++s1;
//		++s2;
//	}
//	if (*s1 != '\0') return 1;
//	if (*s2 != '\0') return -1;
//	return 0;
//}
//
//int _strcmp(const char* s1, const char* s2, int n) {
//	assert(s1 && s2);
//	while (*s1 && *s2 && n--) {
//		if (*(unsigned char*)s1 < *(unsigned char*)s2) {
//			return -1;
//		}
//		if (*(unsigned char*)s1 > *(unsigned char*)s2) {
//			return 1;
//		}
//		++s1;
//		++s2;
//	}
//	if (*s1 != '\0') return 1;
//	if (*s2 != '\0') return -1;
//	return 0;
//}
//
//void* _memcpy(void* s1, const void* s2, size_t n) {
//	assert(s1 && s2);
//	char* str1 = (char*)s1;
//	const char* str2 = (const char*)s2;
//	while (*str2 && n--) {
//		*str1++ = *str2++;
//	}
//	return s1;
//}
//void* _memmove(void* s1, const void* s2, size_t n) {
//	assert(s1 && s2);
//	char* str1 = (char*)s1;
//	const char* str2 = (const char*)s2;
//	if (str1 > str2 && str1 < str2 + n) {
//		str1 += n - 1;
//		str2 += n - 1;
//		while (*str2 && n--) {
//			*str1-- = *str2--;
//		}
//	}
//	else {
//		while (*str2 && n--) {
//			*str1++ = *str2++;
//		}
//	}
//	return s1;
//}
//int maxSubArray(vector<int>& nums) {
//	int len = nums.size();
//	int dp = nums[0];
//	int ret = dp;
//	for (int i = 1; i < len; ++i) {
//		dp = max(dp + nums[i], nums[i]);
//		ret = max(ret, dp);
//	}
//	return ret;
//}
//
//
//int minimumTotal(vector<vector<int>>& t) {
//	int len = t.size();
//	vector<vector<int>> dp(2, vector<int>(len));
//	dp[0][0] = t[0][0];
//	for (int i = 1; i < len; ++i) {
//		for (int j = 0; j <= i; ++j) {
//			dp[i & 1][j] = INT_MAX;
//			if (j > 0) {
//				dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + t[i][j]);
//			}
//			if (j < i) {
//				dp[i][j] = min(dp[i][j], dp[i - 1][j] + t[i][j]);
//			}
//		}
//	}
//	int ret = INT_MAX;
//	for (int i = 0; i < len; ++i) {
//		ret = min(ret, dp[len - 1][i]);
//	}
//	return ret;
//}
//
//int uniquePathsWithObstacles(vector<vector<int>>& a) {
//	int m = a.size(), n = a[0].size();
//	vector<vector<int>> dp(m, vector<int>(n, 0));
//	for (int i = 0; i < m; ++i) {
//		for (int j = 0; j < n; ++j) {
//			if (a[i][j]) continue;
//			if (!i && !j) dp[i][j] = 1;
//			if (i > 0) {
//				dp[i][j] += dp[i - 1][j];
//			}
//			if (j > 0) {
//				dp[i][j] += dp[i][j - 1];
//			}
//
//		}
//	}
//	return dp[m - 1][n - 1];
//}
//
//
//int numDecodings(string s) {
//	if (s.empty()) return 0;
//	int n = s.size();
//	vector<int> dp(n + 1);
//	dp[0] = 1;
//	for (int i = 1; i <= n; ++i) {
//		if (s[i - 1] != '0') dp[i] += dp[i - 1];
//		if (i >= 2) {
//			int t = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
//			if (t >= 10 && t <= 26) dp[i] += dp[i - 2];
//		}
//	}
//	return dp[n];
//}
//
//int rob(vector<int>& nums) {
//	int n = nums.size();
//	vector<int> f(n + 1), g(n + 1);
//	for (int i = 1; i <= n; ++i) {
//		f[i] = max(f[i - 1], g[i - 1]);
//		g[i] = f[i - 1] + nums[i - 1];
//	}
//	return max(f[n], g[n]);
//}
//
//
//
//
//int lengthOfLIS(vector<int>& nums) {
//	int n = nums.size();
//	vector<int> f(n);
//	for (int i = 0; i < n; ++i) {
//		f[i] = 1;
//		for (int j = 0; j < i; ++j) {
//			if (nums[j] < nums[i]) {
//				f[i] = max(f[i], f[j] + 1);
//			}
//		}
//	}
//	int res = 0;
//	for (int i = 0; i < n; ++i) {
//		res = max(res, f[i]);
//	}
//	return res;
//}
//
//
//int minDistance(string word1, string word2) {
//	int n = word1.size(), m = word2.size();
//	vector<vector<int>> f(n + 1, vector<int>(m + 1));
//	for (int i = 0; i <= n; ++i) f[i][0] = i;
//	for (int i = 0; i <= m; ++i) f[0][i] = i;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			f[i][j] = min(f[i][j - 1], f[i - 1][j]) + 1;
//			f[i][j] = min(f[i][j], f[i - 1][j - 1] + (word1[i - 1] != word2[j - 1]));
//		}
//	}
//	return f[n][m];
//}
//
//
//int change(int m, vector<int>& coins) {
//	int n = coins.size();
//	vector<int> f(m + 1);
//	f[0] = 1;
//	for (int c = 0; c < n; ++c) {
//		for (int j = coins[c]; j <= m; ++j) {
//			f[j] += f[j - coins[c]];
//		}
//	}
//	return f[m];
//} 
//
//int strangePrinter(string s) {
//	if (s.empty()) return 0;
//	int n = s.size();
//	vector<vector<int>> f(n + 1, vector<int>(n + 1));
//	for (int len = 1; len <= n; ++len) {
//		for (int l = 0; l + len - 1 < n; ++l) {
//			int r = l + len - 1;
//			f[l][r] = f[l + 1][r] + 1;
//			for (int k = l + 1; k <= r; ++k) {
//				if (s[k] == s[l]) {
//					f[l][r] = min(f[l][r], f[l][k - 1] + f[k + 1][r]);
//				}
//			}
//		}
//	}
//	return f[0][n - 1];
//}
//
//






//int fun(vector<char>& s1, vector<char>& s2, int n) {
//	if (n == 0) return 0;
//	vector<vector<int>> f = vector<vector<int>>(n + 1, vector<int>(n + 1, 0));
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++){
//
//			if (s1[i - 1] == s2[j - 1]) {
//				f[i][j] = f[i - 1][j - 1] + 1;
//			}
//			else {
//				f[i][j] = max(f[i - 1][j], f[i][j - 1]);
//			}
//		}
//	return f[n][n];
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<char> s1(n), s2(n);
//		for (int i = 0; i < n; i++) {
//			cin >> s1[i];
//		}
//		for (int i = 0; i < n; i++) {
//			cin >> s2[i];
//		}
//		double ret = (double)fun(s1, s2, n) / n;
//		printf("%.2f", ret);
//		if (ret > 0.5) {
//			cout << " No" << endl;
//		}
//		else{
//			cout << " Yes" << endl;
//		}
//	}
//	return 0;
//}
//
//



