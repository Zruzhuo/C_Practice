class Solution {
public:
	int singleNumbers(vector<int>& num) {
		int ret = 0;
		for (int i = 0; i < num.size(); ++i) {
			ret ^= num[i];
		}
		return ret;
	}
	vector<int> singleNumber(vector<int>& nums) {
		int z = 0, code = 0;
		vector<int> A, B, ret;
		for (int i = 0; i < nums.size(); ++i) {
			z ^= nums[i];
		}
		for (int i = 0; i < 32; ++i) {
			if ((z >> i) & 1 == 1) {
				code = pow(2,i);
				break;
			}
		}
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] & code) {
				A.push_back(nums[i]);
			}
			else {
				B.push_back(nums[i]);
			}
		}
		ret.push_back(singleNumbers(A));
		ret.push_back(singleNumbers(B));
		return ret;
	}
};