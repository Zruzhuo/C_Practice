#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getMost(vector<vector<int> > board) {
	int low = board.size();
	int col = board[0].size();
	vector<vector<int>> dp = board;
	for (int i = 1; i < low; ++i)
		dp[i][0] += dp[i - 1][0];
	for (int j = 1; j < col; ++j)
		dp[0][j] += dp[0][j - 1];
	for (int i = 1; i < low; ++i)
	{
		for (int j = 1; j < col; ++j)
		{
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + board[i][j];
		}
	}
	return dp[low - 1][col - 1];
}
int main()
{
	return 0;
}