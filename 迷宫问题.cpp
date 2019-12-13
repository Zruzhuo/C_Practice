#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
	int m = 0, n = 0;
	cin >> m >> n;
	vector<vector<int>> maze;
	maze.resize(m*n);
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> maze[i][j];
		}
	}
	stack<vector<int>> route;
	
	return 0;
}