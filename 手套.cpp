int findMinimum(int n, vector<int> left, vector<int> right) {
	int count = 0, left_sum = 0, right_sum = 0, left_min = 27, right_min = 27;
	for (int i = 0; i < n; ++i)
	{
		if (left[i] == 0 || right[i] == 0)
		{
			count += left[i] + right[i];
		}
		else
		{
			left_sum += left[i];
			right_sum += right[i];
			left_min = (left_min < left[i]) ? left_min : left[i];
			right_min = (right_min < right[i]) ? right_min : right[i];
		}
	}
	count += ((left_sum - left_min < right_sum - right_min) ? left_sum - left_min + 1 : right_sum - right_min + 1) + 1;
	return count;
}