class Solution {
public:
	bool isValid(string s) {
		stack<char> a;
		int len = s.size();
		for (int i = 0; i < len; ++i) {
			if (a.empty() == true) {
				a.push(s[i]);
			}
			else
			{
				if ((a.top() == '(' && s[i] == ')') || (a.top() == '[' && s[i] == ']') || (a.top() == '{' && s[i] == '}')) {
					a.pop();
				}
				else {
					a.push(s[i]);
				}
			}
		}
		return a.empty();
 	}
};