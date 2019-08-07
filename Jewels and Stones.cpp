class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int a[52] = { 0 };
		int count = 0;
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] >= 'a')
			{
				a[S[i] - 'a']++;
			}
			else
			{
				a[S[i] - 'A' + 26]++;
			}
		}
		for (int i = 0; i < J.size(); i++)
		{
			if (J[i] >= 'a')
			{
				count += a[J[i] - 'a'];
			}
			else
			{
				count += a[J[i] - 'A' + 26];
			}
		}
		return count;
	}
};