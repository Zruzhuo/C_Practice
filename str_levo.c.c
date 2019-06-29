//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void levo(char str[], int len, int k)
//{
//	char str1[20] = { 0 };
//	char str2[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		str1[i] = str[i];
//	}
//	for (i = k; i < len; i++)
//	{
//		str2[i - k] = str[i];
//	}
//	strcat(str2, str1);
//	printf("%s\n", str2);
//}
//int main()
//{
//	int k = 0;
//	char str[20] = { 0 };
//	scanf("%s%d", &str, &k);
//	int len = strlen(str);
//	levo(str, len, k);
//	system("pause");
//	return 0;
//}