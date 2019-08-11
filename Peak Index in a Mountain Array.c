

int peakIndexInMountainArray(int* A, int ASize) {
	int i = 1;
	int max = 0;
	while (i < ASize)
	{
		if (A[max] < A[i])
		{
			max = i;
		}
		i++;
	}
	return max;
}

