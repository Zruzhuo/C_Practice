//#include<iostream>
//using namespace std;
//
//int lcm(int a, int b) {
//	for (int i = b; i <= a * b; ++i) {
//		if (i%a == 0 && i%b == 0) {
//			return i;
//		}
//	}
//}
//int gcd(int a, int b) {
//	for (int i = a; i >= 1; --i) {
//		if (a%i == 0 && b%i == 0) {
//			return i;
//		}
//	}
//}
//int lcm_gcd(int n) {
//	int max = 0;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			if (i > j) {
//				swap(i, j);
//			}
//			int lg = lcm(i, j) - gcd(i, j);
//			if (lg > max) {
//				max = lg;
//			}
//		}
//	}
//	return max;
//}
//int main()
//{
//	int n;
//	int max = 0;
//	while (cin >> n) {
//		cout << lcm_gcd(n) << endl;
//	}
//	system("pause");
//	return 0;
//}