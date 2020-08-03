#include <iostream>
#include<vector>
#include<string>
#include<thread>
#include<mutex>
using namespace std;
////int n = 4;    //顶点（城市）数量
////int cost = 0; //从出发城市到当前位置的代价
////int bestc = NoEdge; //最优代价
////int bestx[4];     //最优解
////int x[4];         //x[i]记录第i个城市的索引
////int a[4][4] = {1,30,6,4,30,-1,5,10,6,5,-1,20,4,10,20,-1};//记录城市之间代价，如果两座城市之间不连通则为NoEdge
////
////bool isHave(int i, int t)
////{
////	for (int j = 0; j < t; j++)
////		if (x[j] == i)return true;
////	return false;
////}
////
////void Backtrack(int t)
////{
////	if (t == n)
////	{
////		//最后一个城市和出发城市是否可到达，该条通路的代价是不是最优
////		if (a[x[n - 1]][0] != NoEdge
////			&& ((cost + a[x[n - 1]][0]) < bestc || bestc == NoEdge))
////		{
////			for (int i = 0; i < n; i++)
////			{
////				bestx[i] = x[i];
////				bestc = cost + a[x[n - 1]][0];
////			}
////		}
////	}
////	else
////	{
////		for (int i = 0; i < n; i++)
////		{
////			//当前城市是否已经走过，当前城市与上一座城市之间是否连通
////			if (!isHave(i, t) && a[x[t - 1]][i] != NoEdge && ((cost + a[x[t - 1]][i]) < bestc || bestc == NoEdge))
////			{
////				cost += a[x[t - 1]][i];
////				//cout<<t<<endl;
////				x[t] = i;
////				Backtrack(t + 1);
////				cost -= a[x[t - 1]][i];
////			}
////		}
////	}
////}
////int main()
////{
////	x[0] = 0; //出发城市固定为第一座城市
////	Backtrack(1);
////	for (int i = 0; i < n; i++)
////		cout << bestx[i] + 1 << " ";
////	cout << endl;
////	cout << bestc << endl;
////	system("pause");
////	return 0;
////}
////#define _CRT_SECURE_NO_WARNINGS 1
////
////int atoi(char* str)
////{
////	assert(str);
////	int flag = 1;
////	if (*str == '-')
////	{
////		++str;
////		flag = -1;
////	}
////	if (*str == '+')
////	{
////		++str;
////	}
////	int num = 0;
////	while (*str != '\0')
////	{
////		if (*str > '9' || *str < '0')
////		{
////			printf("字符串非法\n");
////			return -1;
////		}
////		num *= 10;
////		num += *str - '0';
////		++str;	
////	}
////	return num*flag;
////}
////int* twoSum(int* nums, int numsSize, int target, int* returnSize)
////{
////	assert(nums && returnSize);
////	for (int i = 0; i < numsSize; i++)
////	{
////		for (int j = 0; j < numsSize; j++)
////		{
////			if (i != j)
////			{
////				if (nums[i] + nums[j] == target)
////				{
////					returnSize[0] = i;
////					returnSize[1] = j;
////				}
////			}
////		}
////	}
////	return returnSize;
////}
////int main()
////{
////	int nums[4] = {2, 7, 11, 15};
////	int size = sizeof(nums) / sizeof(nums[0]);
////	int target = 9;
////	int returnSize[2] = { 0, 0 };
////	twoSum(nums, size, target, returnSize);
////	printf("%d %d\n", returnSize[0], returnSize[1]);
////	system("pause");
////	return 0;
////}
////char* my_strcpy(char* dst, const char* src)
////{
////	assert(dst && src);
////	char* str = dst;
////	while (*dst++ = *src++);
////	return str;
////}
////int main()
////{
////	char arr1[5] = "adbd";
////	char arr2[5] = "oiuy";
////	printf("%s",my_strcpy(arr1, arr2));
////	system("pause");
////	return 0;
////}
////template<class Type>
////class Loading {
////	friend Type MaxLoading(Type[], Type, int);
////	private:
////		void Backtrack(int i);
////		int n;
////		Type* w, c, cw, bestw, r;
////};
////template<class Type>
////void Loading<Type>::Backtrack(int i) {
////	if (i < n) {
////		bestw = cw;
////		return;
////	}
////	r -= w[i];
////	if (cw + w[i] <= c) {
////		cw += w[i];
////		Backtrack(i + 1);
////		cw -= w[i];
////	}
////	if (cw + r > bestw)
////		Backtrack(i + 1);
////	r += w[i];
////}
////template<class Type>
////Type MaxLoading(Type w[], Type c, int n) {
////	Loading<Type>X;
////	X.w = w;
////	X.c = c;
////	X.n = n;
////	X.bestw = 0;
////	X.cw = 0;
////	X.r = 0;
////	for (int i = 1; i <= n; i++)
////		X.r += w[i];
////	X.Backtrack(1);
////	return X.bestw;.
////}j
////bool isBalanced(struct TreeNode* root)
////{
////	if (root == NULL)
////	{
////		return 0;
////	}
////	
////	isBalanced(root->left)
////}
////void StackPrint(ListNode* plt)
////{
////	if (plt == NULL)
////	{
////		return;
////	}
////	StackPrint(plt->next);
////	printf("%d->", plt->val);
////}
////
////void print(ListNode* plt, Stack* ps)
////{
////	while (plt != NULL)
////	{
////		StackPush(ps, plt->val);
////		plt = plt->next;
////	}
////	while (ps != NULL)
////	{
////		printf("%d->", StackTop(ps));
////		StackPop(ps);
////	}
////}
//
//
////int numJewelsInStones(char * J, char * S) {
////	if (J == NULL || S = NULL)
////	{
////		return NULL;
////	}
////	int count = 0;
////	for (int i = 0; J[i] != NULL; i++)
////	{
////		for (int j = 0; S[j] != NULL; j++)
////		{
////			if (J[i] == S[j])
////			{
////				count++;
////			}
////		}
////		if (j > 50)
////		{
////			return NULL;
////		}
////	}
////	if (i > 50)
////	{
////		return NULL;
////	}
////	return count;
////}
////int main()
////{
////	string s1;
////	string s2("hellohhhhhhhhhhh");
////	cout << s2.size() << endl;
////	cout << s2.capacity() << endl;
////	s2.reserve(100);
////	cout << s2.size() << endl;
////	cout << s2.capacity() << endl;
////	s2.resize(100);
////	cout << s2.size() << endl;
////	cout << s2.capacity() << endl;
////	system("pause");
////	return 0;
////}
////int main()
////{
////	string s1("hello");
////	//下标加operator[]
////	for (size_t i = 0; i < s1.size(); ++i)
////	{
////		cout << s1[i] << endl;
////	}
////	//迭代器
////	string::iterator it = s1.begin();
////	while (it != s1.end()){
////		cout << *it << endl;
////		++it;
////	}
////	cout << endl;
////	for (auto e : s1)
////	{
////		cout << e << endl;
////	}
////	return 0;
////}
////bool IsPopOrder(vector<int> pushV, vector<int> popV)
////{
////	if (pushV.size() != popV.size())
////		return false;
////	size_t pushi = 0;
////	size_t popi = 0;
////	stack<int> s;
////	while (pushi < pushV.size()){
////		s.push(pushV[pushi]);
////		while (s.empty() || s.top() == popV[popi]){
////			s.pop();
////			++popi;
////		}
////		++pushi；
////	}
////	return s.empty();
////}
////int check_sys()
////{
////	int i = 1;
////	return (*(char*)&i);
////}
////int main()
////{
////	int ret = check_sys();
////	(ret == 1) ? (cout << "小端" << endl) : (cout << "大端" << endl);
////	system("pause");
////	return 0;
////}
////int main()
////{
////	int a[5] = { 1, 2, 3, 4, 5 };
////	int* p = (int*)(&a + 1);
////	cout << *(a + 1) << *(p - 1) << endl;
////	system("pause");
////	return 0;
////}
////struct test
////{
////	int num;
////	char a;
////	short b;
////	char s[2];
////	short v[4];
////}*p;
////int main()
////{
////	printf("%p\n", p);
////	printf("%p\n", p + 0x1);
////	printf("%p\n", (unsigned long)p + 0x1);
////	printf("%p\n", (unsigned int*)p + 0x1);
////	system("pause");
////	return 0;
////}
////int main()
////{
////	const char *c[] = { "E", "N", "P", "F"};
////	const char** cp[] = {c+3, c+2, c+1, c};
////	const char*** cpp = cp;
////	printf("%s\n", **++cpp);
////	printf("%s\n", *--*++cpp+3);
////	printf("%s\n", *cpp[-2]+3);
////	printf("%s\n", cpp[-1][-1]+1);
////	system("pause");
////	return 0;
////}
////void GetMemory(char *p)
////{
////	p = (char *)malloc(100);
////}
////void Test(void)
////{
////	char *str = NULL;
////	GetMemory(str);
////	strcpy(str, "hello world");
////	printf("%s",str);
////}
//
////
////
////
////int g        = 1;
////static int s1 = 1;
////
////void test()
////{
////	static int s2  = 1;
////	int i          = 1;
////	int a[10]      = { 1, 2, 3, 4 };
////	char c2[]      = "abcd";
////	const char* cp = "abcd";
////	int* p1        = (int*)malloc(sizeof(int) * 4);
////	int* p2        = (int*)calloc(4, sizeof(int));
////	int* p3        = (int*)realloc(p2, sizeof(int) * 4);
////
////	free(p1);
////	free(p2);
////}
////using s1::ss::c;
////using namespace s1::ss;
////namespace s1
////{
////	int a;
////	int tmp(int a, int b) {
////		return a + b;
////	}
////	namespace ss {
////		int c;
////	}
////}
////int main()
////{
////	s1::ss::c = 1;
////}
////extern "C"
////void print(int a, int b = 1, int c = 1000) {
////	cout << a << b << c << endl;
////}
////int main()
////{
////	print(1);
////	system("pause");
////	return 0;
////}
////int main()
////{
////	const int& r1 = 10;
////
////	int a = 20;
////	const int& r2 = a;
////
////	const int b = 30;
////	const int& r3 = b;
////
////	int c = b;
////
////	int* p1 = &b;
////	const int* p2 = &b;
////	system("pause");
////	return 0;
////}
////int& arr(int i)
////{
////	static int a[10] = { 0, 1, 2, 3,4,5 };
////	return a[i];
////}
////int main()
////{
////	int x = 10;
////	auto p = &x;
////	auto a = x;
////	auto& c = x;
////	cout << x << ' ' << p << ' ' << a << ' ' << &c << endl;
////	system("pause");
////	return 0;
////}
//
////void test()
////{
////	int arr[3][2] = { 0,1, 2,3,4,5 };
////	for (auto e : arr[0]) {
////		cout << e << ' ' << endl;
////	}
////	for (auto& e : arr[0]) {
////		e *= 2;
////	}
////	for (auto e : arr[0]) {
////		cout << e << ' ' << endl;
////	}
////}
////int main()
////{
////	test();
////	system("pause");
////	return 0;
////}
////void f(int)
////{
////	cout << "f(int)" << endl;
////}
////
////void f(int*)
////{
////	cout << "f(int*)" << endl;
////}
////
////int main()
////{
////	cout << sizeof(0) << endl;
////	system("pause");
////	return 0;
////}
////class A
////{
////private:
////	int k;
////	int h;
////public:
////	class B
////	{
////		int a;
////		int c;
////		int s;
////	public:
////	};
////};
////int main()
////{
////	A a1;
////	A::B b1;
////	cout << sizeof(a1) << endl;
////	cout << sizeof(b1) << endl;
////	system("pause");
////	return 0;
////}
//
//
//void test()
//{
//	//管理对象
//	int* p1 = new int;
//	int* p2 = new int(5);
//	delete p1;
//	delete p2;
//	//管理对象数组
//	int* p3 = new int[5];
//	delete[] p3;
//}
//template <typename T>
////饿汉模式
////class s_i {
////public:
////	T* get_instance() {
////		return &_data;
////	}
////private:
////	static T _data;
////};
////T s_i::_data = 10;
//
////懒汉模式
//mutex g_mutex;
//class s_i {
//public:
//	static T* get_instance() {
//		if (_data == nullptr) {
//		//二次判断
//			g_mutex.lock();//实现线程安全
//			if (_data == nullptr) {
//				_data = new T;
//			}
//			g_mutex.unlock();
//		}
//		return _data;
//	}
//private:
//	//static保证所有对象使用同一份资源
//	//volatile防止编译器过度优化
//	volatile static T* _data;
//};
//
//volatile T* s_i::_data = nullptr;
//
//int main()
//{
//	s_i a1;
//	s_i b1;
//	printf("a1:%d-%p\n", *(a1.get_instance()), a1.get_instance());
//	printf("b1:%d-%p\n", *(b1.get_instance()), b1.get_instance());
//	system("pause");
//	return 0;
//}
int main()
{
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	vector<int>::iterator it2 = arr.begin();
	vector<int>::iterator it1 = it2++;
	arr.erase(it1);
	cout << *it2 << endl;
	system("pause");
	return 0;
}