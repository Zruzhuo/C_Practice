#include <iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;

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






double fun(vector<char>& s1, vector<char>& s2) {
	if (s1.size() == 0 || s2.size() == 0)
		return 0;
	vector<vector<int>> memo = vector<vector<int>>(s1.size() + 1, vector<int>(s2.size() + 1, 0)); 
	for (int i = 0; i < s1.size(); i++)
		for (int j = 0; j < s2.size(); j++)
			if (s1[i] == s2[j])
				memo[i + 1][j + 1] = memo[i][j] + 1;
			else
				memo[i + 1][j + 1] = max(memo[i][j + 1], memo[i + 1][j]);
	return memo[s1.size()][s2.size()];
}

int main() {
	int n;
	while (cin >> n) {
		double m = n;
		vector<char> p1(n), p2(n);
		for (int i = 0; i < n; i++) {
			cin >> p1[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> p1[i];
		}
		double ret = fun(p1, p2) / m;
		cout << ret << ' ';
		if (ret > 0.50) {
			cout << "No" << endl;
		}
		else{
			cout << "Yes" << endl;
		}
	}
	return 0;
}





