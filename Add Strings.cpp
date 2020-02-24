#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	string addStrings(string num1, string num2) {
		int end1 = num1.length() - 1;
		int end2 = num2.length() - 1;
		int v1 = 0, v2 = 0;
		int carry = 0;
		string add;
		while (end1 >= 0 || end2 >= 0) {
			if (end1 >= 0) {
				v1 = num1[end1--] - '0';
			}
			else {
				v1 = 0;
			}
			if (end2 >= 0) {
				v2 = num2[end2--] - '0';
			}
			else {
				v2 = 0;
			}
			int add_v = v1 + v2 + carry;
			if (add_v > 9) {
				add_v -= 10;
				carry = 1;
			}
			else {
				carry = 0;
			}
			add += add_v + '0';
		}
		if (carry == 1) {
			add += '1';
		}
		reverse(add.begin(), add.end());
		return add;
	}
};