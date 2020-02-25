class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ret = 0;
		for (int i = 0; i < 32; ++i) {
			int tmp = 0;
			for (int j = 0; j < nums.size(); ++j) {
				tmp += (nums[j] >> i) & 1;
			}
			tmp = tmp % 3;
			ret += tmp << i;
		}
		return ret;
	}
};