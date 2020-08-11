#include <iostream>
#include <assert.h>
#include<vector>
#include<algorithm>
#include <string>
#include<stack>
using namespace std;

#include <set>

int main()
{
	int array[] = { 2, 1, 1, 9, 6, 0, 5, 8, 4, 7 };
	// 注意：multiset在底层实际存储的是<int, int>的键值对
	multiset<int> s(array, array + sizeof(array) / sizeof(array[0]));
	for (auto& e : s)
		cout << e << " ";
	cout << endl;
	system("pause");
	return 0;
}

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



