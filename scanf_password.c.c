#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr1[10] = "123abc";
	char arr2[10] = { 0 };
	int i = 0;
	printf("���������룺");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", &arr2);
		if (strcmp(arr1, arr2) == 0)
		{
			printf("������ȷ");
			system("pause");
			return 0;
		}
		else
		{
			if (i == 2)
			{
				printf("�������δ����˳�����\n");
				system("pause");
			}
			else
				printf("����������������룺");
		}
	}
	
}