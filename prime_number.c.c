#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, n = 0;
	printf("100~200之间的素数：\n");
	for (i = 100; i < 201; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (0 == i % j)
			{
				break;
			}
			else
			{
				if (j == i - 1)
				{
					n = 1;
				}
			}
		}
		if (1 == n)
		{
			printf("%d\n", i);
			n = 0;
		}
	}
	system("pause");
	return 0;
}