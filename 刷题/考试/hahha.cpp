#include <iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int len = nums.size();
	int dp = nums[0];
	int ret = dp;
	for (int i = 1; i < len; ++i) {
		dp = max(dp + nums[i], nums[i]);
		ret = max(ret, dp);
	}
	return ret;
}


int minimumTotal(vector<vector<int>>& t) {
	int len = t.size();
	vector<vector<int>> dp(2, vector<int>(len));
	dp[0][0] = t[0][0];
	for (int i = 1; i < len; ++i) {
		for (int j = 0; j <= i; ++j) {
			dp[i & 1][j] = INT_MAX;
			if (j > 0) {
				dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + t[i][j]);
			}
			if (j < i) {
				dp[i][j] = min(dp[i][j], dp[i - 1][j] + t[i][j]);
			}
		}
	}
	int ret = INT_MAX;
	for (int i = 0; i < len; ++i) {
		ret = min(ret, dp[len - 1][i]);
	}
	return ret;
}

int uniquePathsWithObstacles(vector<vector<int>>& a) {
	int m = a.size(), n = a[0].size();
	vector<vector<int>> dp(m, vector<int>(n, 0));
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (a[i][j]) continue;
			if (!i && !j) dp[i][j] = 1;
			if (i > 0) {
				dp[i][j] += dp[i - 1][j];
			}
			if (j > 0) {
				dp[i][j] += dp[i][j - 1];
			}

		}
	}
	return dp[m - 1][n - 1];
}


int numDecodings(string s) {
	if (s.empty()) return 0;
	int n = s.size();
	vector<int> dp(n + 1);
	dp[0] = 1;
	for (int i = 1; i <= n; ++i) {
		if (s[i - 1] != '0') dp[i] += dp[i - 1];
		if (i >= 2) {
			int t = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
			if (t >= 10 && t <= 26) dp[i] += dp[i - 2];
		}
	}
	return dp[n];
}

int rob(vector<int>& nums) {
	int n = nums.size();
	vector<int> f(n + 1), g(n + 1);
	for (int i = 1; i <= n; ++i) {
		f[i] = max(f[i - 1], g[i - 1]);
		g[i] = f[i - 1] + nums[i - 1];
	}
	return max(f[n], g[n]);
}