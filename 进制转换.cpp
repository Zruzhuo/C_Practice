//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int M = 0, N = 0, flag = 1;
//	cin >> M >> N;
//	if (M < 0)
//	{
//		flag = -1;
//		M = -M;
//	}
//	vector<int> num;
//	num.resize(1000);
//	int i = 0;
//	while (M != 0)
//	{
//		num[i] = M % N;
//		M = M / N;
//		++i;
//	}
//	if (flag == -1)
//	{
//		cout << '-';
//	}
//	while (i)
//	{
//		if (num[i - 1] >= 10 && num[i - 1] <= 15)
//			cout << (char)(num[i - 1]+55);
//		else
//			cout << num[i - 1];
//		--i;
//	}
//	system("pause");
//	return 0;
//}