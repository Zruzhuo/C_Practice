

int majorityElement(int* nums, int numsSize) {
	int count = 1;
	int ret = nums[0];
	int i = 1;
	while (i < numsSize)
	{
		if (nums[i] == ret)
		{
			count++;
		}
		else
		{
			count--;
		}
		if (count == 0)
		{
			ret = nums[i];
			count = 1;
		}
		i++;
	}
	return ret;
}

