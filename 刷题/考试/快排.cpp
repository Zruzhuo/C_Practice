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
