////#include <iostream>
////using namespace std;
////
////#define NoEdge -1   //两点之间无法到达
////
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
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
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
//template<class Type>
//class Loading {
//	friend Type MaxLoading(Type[], Type, int);
//	private:
//		void Backtrack(int i);
//		int n;
//		Type* w, c, cw, bestw, r;
//};
//template<class Type>
//void Loading<Type>::Backtrack(int i) {
//	if (i < n) {
//		bestw = cw;
//		return;
//	}
//	r -= w[i];
//	if (cw + w[i] <= c) {
//		cw += w[i];
//		Backtrack(i + 1);
//		cw -= w[i];
//	}
//	if (cw + r > bestw)
//		Backtrack(i + 1);
//	r += w[i];
//}
//template<class Type>
//Type MaxLoading(Type w[], Type c, int n) {
//	Loading<Type>X;
//	X.w = w;
//	X.c = c;
//	X.n = n;
//	X.bestw = 0;
//	X.cw = 0;
//	X.r = 0;
//	for (int i = 1; i <= n; i++)
//		X.r += w[i];
//	X.Backtrack(1);
//	return X.bestw;.
//}j
//bool isBalanced(struct TreeNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	
//	isBalanced(root->left)
//}
void StackPrint(ListNode* plt)
{
	if (plt == NULL)
	{
		return;
	}
	StackPrint(plt->next);
	printf("%d->", plt->val);
}

void print(ListNode* plt, Stack* ps)
{
	while (plt != NULL)
	{
		StackPush(ps, plt->val);
		plt = plt->next;
	}
	while (ps != NULL)
	{
		printf("%d->", StackTop(ps));
		StackPop(ps);
	}
}