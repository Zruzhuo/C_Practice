class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		stack<int> s;
		if (tokens.size() == 0) {
			return 0;
		}
		for (int i = 0; i < tokens.size(); ++i) {
			if (tokens[i].compare("*") && tokens[i].compare("/") && tokens[i].compare("+") && tokens[i].compare("-")) {
				if (tokens[i][0] != '-') {
					int x = atoi(tokens[i].c_str());
					s.push(x);
				}
				else {
					string str = tokens[i].substr(1);
					int x = 0 - atoi(str.c_str());
					s.push(x);
				}
			}
			else {
				int x = s.top();
				s.pop();
				int y = s.top();
				s.pop();
				if (!(tokens[i].compare("*"))) {
					s.push(y * x);
				}
				else if (!(tokens[i].compare("/"))) {
					s.push(y / x);
				}
				else if (!(tokens[i].compare("+"))) {
					s.push(y + x);
				}
				else {
					s.push(y - x);
				}
			}
		}
		return s.top();
	}
};