#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main() {
	long long  n;
	while (cin >> n) {
		vector<long long> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		long long count = 0;
		sort(a.begin(), a.end());
		for (int i = n - 1; i > 0; --i) {
			count += a[i] - a[0];
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}

















//const int inf = 0x3f3f3f3f;
//const int maxn = 5000 + 10;
//char a[maxn];
//int dp[maxn];
//int main()
//{
//	int i, j, k, n;
//	while (scanf("%s", a + 1) != EOF)
//	{
//		n = strlen(a + 1);
//		dp[0] = 0;
//		for (i = 1; i <= n; i++)
//			dp[i] = inf;
//		for (i = 1; i <= n; i++)
//		{
//			for (j = i, k = i; j <= n && k > 0; j++, k--)
//			{
//				if (a[j] == a[k])
//					dp[j] = min(dp[j], dp[k - 1] + 1);
//				else
//					break;
//			}
//			for (j = i + 1, k = i; j <= n && k > 0; j++, k--)
//			{
//				if (a[j] == a[k])
//					dp[j] = min(dp[j], dp[k - 1] + 1);
//				else
//					break;
//			}
//		}
//		printf("%d\n", dp[n]);
//	}
//	return 0;
//}
//int main()
//	string s;
//	int n;
//	while(cin >> s >> n){
//		vector<qj> a(n);
//		for (int i = 0; i < n; ++i) {
//			cin >> a[i].a >> a[i].b;
//		}
//		for (int i = 0; i < n; ++i) {
//			auto it1 = s.begin() + a[i].a - 1;
//			auto it2 = s.begin() + a[i].b - 1;
//			string str(it1, it2);
//			cout << count_s(str) << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
//bool is_0(vector<int>& a) {
//	for (int i = 0; i < a.size(); ++i) {
//		if (a[i] != 0) {
//			return true;
//		}
//	}
//	return false;
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<int> a(n);
//		for (int i = 0; i < n; ++i) {
//			cin >> a[i];
//		}
//		int count = 0;
//		while (is_0(a)) {
//			for (int i = 0; i < n; ) {
//				if (a[i] == 0) {
//					count++;
//					while (a[i] == 0 && i < n) {
//						++i;
//					}
//					continue;
//				}
//				else {
//					a[i]--;
//					if (i == n - 1) {
//						count++;
//					}
//					++i;
//				}
//			}
//		}
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}







//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int n, res = 0, n1, n2;
//		vector<int> a;
//		cin >> n;
//		int tmp = n;
//		while (n) {
//			a.push_back(n % 10);
//			n /= 10;
//		}
//		n1 = (a[a.size() - 1] - 1) * pow(10, a.size() - 1);
//		for (int i = a.size() - 1; i >= 0; --i) {
//			n1 += 9 * pow(10, i - 1);
//		}
//		n2 = tmp - n1;
//		while (n1) {
//			res += n1 % 10;
//			n1 /= 10;
//		}
//		while (n2) {
//			res += n2 % 10;
//			n2 /= 10;
//		}
//		cout << res << endl;
//	}
//	system("pause");
//	return 0;
//}
















//struct f {
//	int a, b;
//};
//
//bool flag = 0;
//int gys(int a, int b) {
//	if (b == 0) return a;
//	else return gys(b, a%b);
//}
//
//f fun(f x) {
//	int z = gys(abs(x.a), abs(x.b));
//	x.a /= z;
//	x.b /= z;
//	return x;
//}
//
//f add(f x, f y) {
//	f ret;
//	ret.a = x.a * y.b + x.b * y.a;
//	ret.b = x.b * y.b;
//	return fun(ret);
//}
//
//f miu(f x, f y) {
//	f ret;
//	int tmp = x.b;
//	x.a *= y.b;
//	x.b *= y.b;
//	y.a *= tmp;
//	y.b *= tmp;
//	if (x.a < y.a) {
//		flag = 1;
//		int t = x.a;
//		x.a = y.a;
//		y.a = t;
//	}
//	ret.a = x.a - y.a;
//	ret.b = x.b;
//	return fun(ret);
//}
//
//f mul(f x, f y) {
//	f ret;
//	ret.a = x.a * y.a;
//	ret.b = x.b * y.b;
//	return fun(ret);
//}
//
//f div(f x, f y) {
//	f ret;
//	ret.a = x.a * y.b;
//	ret.b = x.b * y.a;
//	return fun(ret);
//}
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		f x, y, ret;
//		x.a = s[0] - '0';
//		x.b = s[2] - '0';
//		y.a = s[6] - '0';
//		y.b = s[8] - '0';
//		if (s[4] == '+') {
//			ret = add(x, y);
//		}
//		if (s[4] == '-') {
//			ret = miu(x, y);
//		}
//		if (s[4] == '*') {
//			ret = mul(x, y);
//		}
//		if (s[4] == '/') {
//			ret = div(x, y);
//		}
//		if (flag == 1) {
//			cout << '-';
//		}
//		cout << ret.a << '/' << ret.b << endl;
//	}
//	system("pause");
//	return 0;
//}













//bool cmp(vector<int> x, vector<int> y) {
//	return x[1] < y[1];
//}
//
//int eraseOverlapIntervals(vector<vector<int> >& a) {
//	if (a.empty()) return 0;
//	sort(a.begin(), a.end(), cmp);
//	int last = a[0][1], ret = 0;
//	for (int i = 1; i < a.size(); ++i) {
//		if (a[i][0] < last) {
//			++ret;
//		}
//		else {
//			last = a[i][1];
//		}
//	}
//	return ret;
//}
//











//int c[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
//int row, col;
//int dfs(vector<vector<int>>& arr, int n, int m, vector<vector<int>>& tmp) {
//	if (tmp[n][m] != 0) return tmp[n][m];
//	++tmp[n][m];
//	for (int* i : c) {
//		int N = n + i[0], M = m + i[1];
//		if (N >= 0 && N < row && M >= 0 && M < col && arr[N][M] > arr[n][m]) {
//			tmp[n][m] = max(tmp[n][m], dfs(arr, N, M, tmp) + 1);
//		}
//	}
//	return tmp[n][m];
//}
//int long_num(vector<vector<int>>& arr) {
//	if (arr.empty() || arr[0].empty()) return 0;
//	row = arr.size();
//	col = arr[0].size();
//	vector<vector<int>> tmp(row, vector<int>(col, 0));
//	int ret = 0;
//	for (int i = 0; i < row; ++i) {
//		for (int j = 0; j < col; ++j) {
//			ret = max(ret, dfs(arr, i, j, tmp));
//		}
//	}
//	return ret;
//}
//int main() {
//	int N, M;
//	while (cin >> N >> M) {
//	
//		vector<vector<int>> arr(N, vector<int>(M));
//		for (int i = 0; i < N; ++i) {
//			for (int j = 0; j < M; ++j) {
//				cin >> arr[i][j];
//			}
//		}
//		cout << long_num(arr) << endl;
//	}
//	return 0;
//}





















//string compressString(string s) {
//	string ret;
//	int count = 1;
//	for (int i = 0; i < s.length(); ++i) {
//		if (s[i] == s[i + 1]) {
//			++count;
//		}
//		else {
//			ret.push_back(s[i]);
//			if (count != 1) {
//				ret.push_back(count + '0');
//			}
//			else {
//				ret.push_back(1 + '0');
//			}
//			count = 1;
//		}
//	}
//	if (ret.length() >= s.length()) {
//		return s;
//	}
//	else {
//		return ret;
//	}
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	cout << compressString(s) << endl;
//	system("pause");
//	return 0;
//
//}
//
//
//int findDuplicateNum(int* arr, int len) {
//	if (len > 1) {
//		int s = arr[0], f = arr[arr[0]];;
//		while (s != f) {
//			s = arr[s];
//			f = arr[arr[f]];
//		}
//		f = 0;
//		while (s != f) {
//			s = arr[s];
//			f = arr[f];
//		}
//		return s;
//	}
//	return -1;
//}
//
//











//#include<iostream>
//using namespace std;
//
//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int Mid_Num(int* a, int left, int right)
//{
//	int mid = left + (right - left) / 2;
//	if (a[left] < a[mid])
//	{
//		if (a[mid] < a[right])
//		{
//			return mid;
//		}
//		else if (a[left] > a[right])
//		{
//			return left;
//		}
//		else
//		{
//			return right;
//		}
//	}
//	else
//	{
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
//
//	}
//}
//int Q_Sort(int* a, int left, int right)
//{
//	int mid = Mid_Num(a, left, right);
//	swap(&a[left], &a[mid]);
//	int key = a[left];
//	int key_index = left;
//	while (left < right)
//	{
//		while (left < right && a[right] >= key)
//		{
//			--right;
//		}
//		while (left < right && a[left] <= key)
//		{
//			++left;
//		}
//		swap(&a[left], &a[right]);
//		if (left < right)
//		{
//			++left;
//			--right;
//		}
//	}
//	swap(&a[left], &a[key_index]);
//	return left;
//}
//
//void Sort(int* a, int left, int right)
//{
//	if (left >= right) return;
//	int key_index = Q_Sort(a, left, right);
//	Sort(a, left, key_index - 1);
//	Sort(a, key_index + 1, right);
//}
