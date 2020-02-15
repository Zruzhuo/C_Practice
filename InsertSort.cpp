#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void InsertSort(int* a, int n)
{
	int i = 1, j = 0, cur = 0;
	for (; i < n; ++i) {
		cur = a[i];
		j = i - 1;
		for (; j >= 0 && cur < a[j]; --j) {
			Swap(&a[j], &a[j + 1]);
		}
	}
}