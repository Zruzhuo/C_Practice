class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int tail = 0;
		if (nums.empty())
			return 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[tail] != nums[i]) {
				++tail;
				nums[tail] = nums[i];
			}
		}
		return tail + 1;
	}
};