#include<iostream>
using namespace std;

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1) {
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i) {
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0) {
				if (tmp < a[end]) {
					a[end + gap] = a[end];
					end = end - gap;
				}
				else {
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}