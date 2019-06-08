#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Print(int n)
{
	int ret = 0;
	if (n > 0)
	{
		ret = n % 10;
		printf("%d ", ret);
		Print(n / 10);
	}
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	system("pause");
	return 0;
}