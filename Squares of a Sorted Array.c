

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize) {
	int i = 0;
	int j = ASize - 1;
	int k = ASize - 1;
	int *b = (int*)malloc(sizeof(int) * ASize);
	while (i <= j)
	{
		if (abs(A[i]) > abs(A[j]))
		{
			b[k] = A[i] * A[i];
			i++;
			k--;
		}
		else
		{
			b[k] = A[j] * A[j];
			j--;
			k--;
		}
	}
	*returnSize = ASize;
	return b;
}

