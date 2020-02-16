#include<iostream>
using namespace std;

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	int min_index;
	int max_index;
	while (begin <= end) {
		min_index = max_index = begin;
		for (int i = begin + 1; i <= end; ++i) {
			if (a[i] < a[min_index]) {
				min_index = i;
			}
			if (a[i] > a[max_index]) {
				max_index = i;
			}
		}
		swap(&a[begin], &a[min_index]);
		if (begin == max_index) {
			max_index = min_index;
		}
		swap(&a[end], &a[max_index]);
		++begin;
		--end;
	}
}