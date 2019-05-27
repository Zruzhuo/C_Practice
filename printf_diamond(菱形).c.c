#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 13; i++)
	{
		if (i <= 7)
		{
			for (j = 1; j <= 13; j ++)
			{
				if (7 - (i - 1) <= j && j <= 7 + (i - 1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		else
		{
			for (j = 1; j <= 13; j++)
			{
				if (7 - (13 - i) <= j && j <= 7 + (13 - i))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}