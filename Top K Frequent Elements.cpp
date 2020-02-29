class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		sort(nums.begin(), nums.end());
		vector<int> ret;
		priority_queue<int> pq;
		int count = 1;
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i] == nums[i - 1]) {
				++count;
			}
			else {
				pq.push(count);
				count = 1;
			}
		}
		while (k) {
			ret.push_back()
			--k;
		}
	}
};