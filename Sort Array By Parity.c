

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize) {
	int x = 0;
	int y = ASize - 1;
	*returnSize = ASize;
	int* B = (int*)malloc(sizeof(int)*ASize);
	for (int i = 0; i < ASize; i++)
	{
		if (A[i] % 2 == 0)
		{
			B[x] = A[i];
			x++;
		}
		else
		{
			B[y] = A[i];
			y--;
		}
	}
	return B;
}
