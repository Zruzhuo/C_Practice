#include<iostream>
#include<vector>
using namespace std;

int main()
{
	size_t W = 0, H = 0, ret = 0;
	cin >> W >> H;
	vector< vector<int> > arr;
	arr.resize(W);
	for (auto& e : arr)
	{
		e.resize(H, 1);
	}
	for (size_t i = 0; i < W; ++i)
	{
		for (size_t j = 0; j < H; ++j)
		{
			if (arr[i][j] == 1)
			{
				++ret;
				if (j+2 < H)
				{
					arr[i][j + 2] = 0;
				}
				if (i+2 < W)
				{
					arr[i + 2][j] = 0;
				}
			}
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}