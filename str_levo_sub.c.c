//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int is_rotate(char* s1, char* s2, int len1, int len2)
//{
//	char* ret = NULL;
//	if (len1 == len2)
//	{
//		char s3[10] = { 0 };
//		strcpy(s3, s1);
//		strcat(s1, s3);
//		ret = strstr(s1, s2);
//		if (ret != NULL)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char s1[20] = { 0 };
//	char s2[10] = { 0 };
//	scanf("%s%s", &s1, &s2);
//	int ret = is_rotate(s1, s2, strlen(s1), strlen(s2));
//	if (ret == 1)
//	{
//		printf("ÊÇ\n");
//	}
//	else
//	{
//		printf("²»ÊÇ\n");
//	}
//	system("pause");
//	return 0;
//}