//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void print(int* arr, int right)
//{
//	int i = 0;
//	for (i = 0; i <= right; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void parity(int* arr, int a, int b)
//{
//	while (a <= b)
//	{
//		if (arr[a] % 2 == 1 && arr[b] % 2 == 0)
//		{
//			a++;
//			b--;
//		}
//		else if (arr[a] % 2 == 1 && arr[b] % 2 == 1)
//		{
//			a++;
//		}
//		else if (arr[a] % 2 == 0 && arr[b] % 2 == 1)
//		{
//			int temp = 0;
//			temp = arr[a];
//			arr[a] = arr[b];
//			arr[b] = temp;
//		}
//		else
//		{
//			b--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0]) - 1;
//	parity(arr, left, right);
//	print(arr, right);
//	system("pause");
//	return 0;
//}