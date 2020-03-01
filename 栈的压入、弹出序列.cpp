#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		stack<int> s;
		int len = pushV.size();
		int j = 0;
		for(int i = 0; i < len; ++i){
			s.push(pushV[i]);
			while (s.top() == popV[j]) {
				s.pop();
				++j;
				if (s.empty()) {
					break;
				}
			}
		}
		return j == len;
	}
};