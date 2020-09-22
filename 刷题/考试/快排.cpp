#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

map<string, int> m;
void fun(string s, int n) {
	if (n == s.size() - 1) {
		m[s]++;
	}
	else {
		for (auto i = n; i < s.size(); ++i) {
			swap(s[n], s[i]);
			fun(s, n + 1);
		}
	}
	return;
}
int main() {
	string s;
	while (getline(cin, s)) {
		fun(s, 0);
		for (auto e : m) {
			cout << e.first << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
//vector<int> getTriggerTime(int increase[][3], int increaseRowLen, int requirements[][3], int requirementsRowLen) {
//	int day = 0, c = 0, r = 0, h = 0;
//	vector<int> res(requirementsRowLen, -1);
//	for (int j = 0; j < requirementsRowLen; ++j) {
//		if (c >= requirements[j][0] && r >= requirements[j][1] && h >= requirements[j][2]) {
//			if (res[j] == -1) {
//				res[j] = day;
//			}
//		}
//	}
//	for (int i = 0; i < increaseRowLen; ++i) {
//		day++;
//		c += increase[i][0];
//		r += increase[i][1];
//		h += increase[i][2];
//		for (int j = 0; j < requirementsRowLen; ++j) {
//			if (c >= requirements[j][0] && r >= requirements[j][1] && h >= requirements[j][2]) {
//				if (res[j] == -1) {
//					res[j] = day;
//				}
//			}
//		}
//	}
//	return res;
//}
//int main() {
//	int a[4][3] = { {0,4,5}, {4,8,8},{8,6,1},{10, 10,0}};
//	int b[5][3] = { {12,11,16}, {20,2,6}, {9,2,6}, {8,1,14} };
//	
//	getTriggerTime(a, 3, b, 4);
//	int i = 1;
//	i = 3;
//	system("pause");
//	return 0;
//}


















//struct A {
//	int a;
//	int b;
//	int money;
//};
//struct ListNode {
//	ListNode* pre;
//	ListNode* next;
//	int num;
//	ListNode(int i){
//		num = i;
//		pre = nullptr;
//		next = nullptr;
//	}
//};
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int n, m, k;
//		cin >> n >> m >> k;
//		vector<A> v(m);
//		for (int i = 0; i < m; ++i) {
//			cin >> v[i].a >> v[i].b >> v[i].money;
//		}
//		vector<ListNode*> l(n + 1);
//		for (int i = 1; i <= n; ++i) {
//			l[i] = new ListNode(i);
//			
//		}
//		for (int i = 0; i < m; ++i) {
//			if (v[i].money <= k) {
//				l[v[i].a]->next = l[v[i].b];
//				l[v[i].b]->pre = l[v[i].a];
//			}
//		}
//		int count = 0;
//		ListNode* tmp = l[1];
//		while (tmp->next) {
//			count++;
//			tmp = tmp->next;
//		}
//		while (tmp->pre) {
//			count++;
//			tmp = tmp->pre;
//		}
//		if (count == n - 1) {
//			cout << "Yes" << endl;
//		}
//		else {
//			cout << "No" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//		int n;
//		string s;
//		cin >> n;
//		getline(cin, s); 
//		getline(cin, s);
//		if (s.size() < n) {
//			reverse(s.begin(), s.end());
//			cout << s << endl;
//		}
//		else {
//			string res;
//			int i = 0;
//			while (i < s.size()) {
//				int t = n;
//				string tmp;
//				while (t--) {
//					if (i < s.size()) {
//						tmp += s[i++];
//					}
//				}
//				reverse(tmp.begin(), tmp.end());
//				res += tmp;
//				tmp.clear();
//			}
//			cout << res << endl;
//		}
//	return 0;
//}
//struct TreeNode {
//	char val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
//};
//TreeNode* fun(string s1, string s2) {
//	TreeNode* pre = (TreeNode*)malloc(sizeof(TreeNode));
//	int len = s1.size();
//	if (len <= 0) {
//		return nullptr;
//	}
//	pre->val = s2[len - 1];
//	auto it = find(s1.begin(), s1.end(), s2[len - 1]);
//	string s3(s1.begin(), it);
//	string s4(s2.begin(), s2.begin() + (it - s1.begin() + 1));
//	pre->left = fun(s3, s4);
//
//	string s5(it + 1, s1.end());
//	string s6(s2.begin() + (it - s1.begin()), s2.end() - 1);
//	pre->right = fun(s5, s6);
//
//	return pre;
//}
//void test(TreeNode* root) {
//	if (root != nullptr) {
//		cout << root->val;
//		test(root->left);
//		test(root->right);
//	}
//	return;
//}

//bool fun(const string& b, const string& m) {
//	if (b.size() == 0) {
//		return false;
//	}
//	if (b.size() == 1) {
//		cout << b;
//		return  true;
//	}
//	int k = find(m, b[b.size() - 1]);
//	cout << b[b.size() - 1];
//	string tmp1 = b.substr(0, k);
//	string tmp2 = m.substr(0, k);
//	fun(tmp1, tmp2);
//	tmp1 = b.substr(k, b.size() - k - 1);
//	tmp2 = m.substr(k + 1, m.size() - k - 1);
//	fun(tmp1, tmp2);
//}

//int x = 0;
//void fun(vector<string>& v, int i, int j, int max){
//	if (x > max) {
//		return;
//	}
//	x++;
//	if (i == v.size()) {
//		cout << endl;
//		fun(v, 0, j + 1, max);
//		return;
//	}
//	if (j > v[i].size() - 1) {
//		j = v[i].size() - 1;
//	}
//	cout << v[i][j];
//	fun(v, i + 1, j, max);
//}
//int main() {
//	string s;
//	while (getline(cin, s)) {
//
//		auto be = s.begin();
//		auto en = s.begin();
//		vector<string> v;
//		while (en < s.end()) {
//			while (*en != ' ') {
//				++en;
//				if (en == s.end()) {
//					break;
//				}
//			}
//			string tmp(be, en);
//			v.push_back(tmp);
//			be = en + 1;
//			en = be;
//		}
//		int max = 1;
//		for (int i = 0; i < v.size(); ++i) {
//			max *= v[i].size();
//		}
//		fun(v, 0, 0, max * v.size());
//	}
//	system("pause");
//	return 0;
//}
//bool cmp(string a, string b) {
//
//}
//int main() {
//	int N, K;
//	while (cin >> N >> K) {
//		vector<string> a(N);
//		for (int i = 0; i < N; ++i) {
//			cin >> a[i];
//		}
//		unordered_map<string, int> m;
//		for (auto e : a) {
//			m[e]++;
//		}
//
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<A> arr(n);
//		for (int i = 0; i < n; ++i) {
//			cin >> arr[i].a;
//			arr[i].index = i;
//		}
//		vector<int> res(n);
//		sort(arr.begin(), arr.end(), cmp);
//		for (int i = 0; i < n; ++i) {
//			if (i < n / 2) {
//				res[arr[i].index] = arr[n / 2].a;
//			}
//			else {
//				res[arr[i].index] = arr[n / 2 - 1].a;
//			}
//		}
//		for (int i = 0; i < n; ++i) {
//			cout << res[i] << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct A {
//	int a;
//	int b;
//};
//bool bol(A x, A y) {
//	if (x.a < y.a) {
//		return true;
//	}
//	return false;
//}
//int main() {
//	int T;
//	cin >> T;
//	int a[sizeof(int)];
//	while (T--) {
//		int n, m;
//		cin >> n >> m;
//		vector<A> N(n), M(m);
//		vector<int> res(n, -1);
//		for (int i = 0; i < n; ++i) {
//			cin >> N[i].a;
//			N[i].b = i;
//		}
//		sort(N.begin(), N.end(), bol);
//		for (int i = 0; i < m; ++i) {
//			cin >> M[i].a;
//			M[i].b = i + 1;
//		}
//		sort(M.begin(), M.end(), bol);
//		int j = 0;
//		for (int i = 0; i < n; ++i) {
//			while (j < m) {
//				if (M[j].a >= N[i].a) {
//					res[N[i].b] = M[j].b;
//					++j;
//					break;
//				}
//				++j;
//			}
//		}
//		for (int i = 0; i < n; ++i) {
//			if (i == n - 1) {
//				cout << res[i] << endl;
//			}
//			else {
//				cout << res[i] << ' ';
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int L, n;
//		cin >> L >> n;
//		vector<int> res(L, 0);
//		vector<vector<int>> a(n, vector<int>(2));
//		for (int i = 0; i < n; ++i) {
//			cin >> a[i][0] >> a[i][1];
//		}
//		for (int i = 0; i < n; ++i) {
//			for (int j = a[i][0] - 1; j <= a[i][1] - 1; ++j) {
//				res[j]++;
//			}
//		}
//		for (int i = 0; i < L; ++i) {
//			if (i == L - 1) {
//				cout << res[i] << endl;
//			}
//			else {
//				cout << res[i] << ' ';
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}












//
//bool is_q(int n) {
//	int a = (int)(sqrt(n) + 0.5);
//	return a * a == n;
//}
//int question(int a, int b) {
//	int k = 0;
//	while (!(is_q(k + a) && is_q(k + b))) {
//		++k;
//	}
//	return k;
//}



//int main() {
//	size_t n;
//	while (cin >> n)
//	{
//		vector<vector<size_t>> a(n + 1, vector<size_t>(n + 1));
//		for (int i = 1; i <= n; ++i) {
//			for (int j = 1; j <= n; ++j) {
//				cin >> a[i][j];
//			}
//		}
//		vector<size_t> ret(n + 1, 0);
//		for (int i = 1; i <= n; ++i) {
//			for (int j = 1; j <= n; ++j) {
//				if (ret[a[i][j]] == 0) {
//					ret[a[i][j]] = i;
//					break;
//				}
//			}
//		}
//		for (int i = 1; i <= n; ++i) {
//			cout << ret[i] << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	int m, n;
//	while (cin >> m >> n) {
//		vector<int> a(n);
//		for (int i = 0; i < n; ++i) {
//			cin >> a[i];
//		}
//		int count = 0;
//		for (int l = 1; l <= m; ++l) {
//			for (int r = 1; r <= m; ++r) {
//				vector<int> ret;
//				int flag = 1;
//				for (int i = 0; i < n; ++i) {
//					if ((a[i] > 0 && a[i] < l) || (a[i] > r && a[i] < m + 1)) {
//						ret.push_back(a[i]);
//					}
//				}
//				if (!ret.empty()) {
//					for (int i = 0; i < ret.size() - 1; ++i) {
//						if (ret[i] > ret[i + 1]) {
//							flag = 0;
//							break;
//						}
//					}
//				}
//				if (flag == 1) {
//					count++;
//				}
//			}
//		}
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main() {
//	int n, x, y;
//	while (cin >> n >> x >> y) {
//		vector<vector<int>> a(n - 1, vector<int>(2));
//		for (int i = 0; i < n - 1; ++i) {
//			cin >> a[i][0] >> a[i][1];
//		}
//		for (int i = 0; i < n - 1; ++i) {
//
//		}
//		int count = 0;
//		cout << y - x + 1 << endl;
//	}
//	system("pause");
//	return 0;
//}


//int main() {
//	int n;
//	while (cin >> n) {
//		string T;
//		cin >> T;
//		int begin, end, m1, m2;
//		for (int i = 0; i < n; ++i) {
//			if (T[i] == 'M') {
//				m1 = i;
//				break;
//			}
//		}
//		for (int i = m1 + 1; i < n; ++i) {
//			if (T[i] == 'T') {
//				begin = i + 1;
//				break;
//			}
//		}
//		for (int i = n - 1; i >= 0; --i) {
//			if (T[i] == 'T') {
//				m2 = i;
//				break;
//			}
//		}
//		for (int i = m2 + 1; i >= 0; --i) {
//			if (T[i] == 'M') {
//				end = i - 1;
//				break;
//			}
//		}
//		
//		for (int i = begin; i <= end; ++i) {
//			cout << T[i];
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

















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
