#include<iostream>
#include<vector>
using namespace std;

bool checkWon(vector<vector<int> > board) {
	for (int i = 0; i < 3; ++i)
	{
		int sum_row = 0;
		int sum_cow = 0;
		for (int j = 0; j < 3; ++j)
		{
			sum_row += board[i][j];
			sum_cow += board[j][i];
		}
		if (sum_row == 3 || sum_cow == 3)
			return true;
	}
	int A = 0;
	int B = 0;
	for (int i = 0; i < 3; ++i)
	{
		A += board[i][i];
		B += board[i][3 - 1 - i];
	}
	if (A == 3 || B == 3)
		return true;
	return false;
}
int main()
{
	vector<vector<int> > board;
	board.resize(9);
	cout << checkWon(board) << endl;
	system("pause");
	return 0;
}