

int calPoints(char ** ops, int opsSize) 
{
	int* a = (int*)malloc(sizeof(int)*opsSize);
	int i = 0;
	int last = 0;
	int sum = 0;
	for (; i < opsSize; i++)
	{
		if (*ops[i] == '+')
		{
			sum = sum + a[last - 1] + a[last - 2];
			a[last] = a[last - 1] + a[last - 2];
			last++;
		}
		else if (*ops[i] == 'D')
		{
			sum = sum + a[last - 1] * 2;
			a[last] = a[last - 1] * 2;
			last++;
		}
		else if (*ops[i] == 'C')
		{
			sum = sum - a[last - 1];
			a[last - 1] = 0;
			last--;
		}
		else
		{
			int t = atoi(ops[i]);
			sum = sum + t;
			a[last] = t;
			last++;
		}
	}
	free(a);
	return sum;
}

