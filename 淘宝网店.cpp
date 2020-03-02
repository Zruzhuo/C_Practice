#include<iostream>
#include<stdlib.h>
using namespace std;
bool is_su(int month) {
	if (month == 1) {
		return false;
	}
	for (int i = month - 1; i > 1; i--) {
		if (month % i == 0) {
			return false;
		}
	}
	return true;
}

bool is_run(int year) {
	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
		return true;
	}
	return false;
}

int Money(int y1, int m1, int d1, int y2, int m2, int d2) {
	int sum = 0;
	int s1[] = { 0, 62, 28, 31, 60, 31, 60, 31, 62, 60, 62, 30, 62 };
	int s2[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (y1 == y2 && m1 == m2) {
		if (is_su(m1)) {
			sum = d2 - d1 + 1;
		}
		else {
			sum = 2 * (d2 - d1 + 1);
		}
	}
	else if (y1 == y2 && m1 != m2) {
		if (!is_run(y1)) {
			for (int i = m1 + 1; i < m2; ++i) {
				sum += s1[i];
			}
			if (is_su(m1)) {
				sum += s2[m1] - d1 + 1;
			}
			else {
				sum += 2 * (s2[m1] - d1 + 1);
			}
			if (is_su(m2)) {
				sum += d2;
			}
			else {
				sum += 2 * d2;
			}
		}
		else {
			if (m1 < 2 && m2 > 2) {
				sum++;
			}
		}
	}
	else {
		for (int i = y1 + 1; i < y2; ++i) {
			if (!is_run(i)) {
				sum += 579;
			}
			else {
				sum+= 580;
			}
		}
		for (int i = m1 + 1; i < 13; ++i) {
			sum += s1[i];
		}
		if (is_su(m1)) {
			sum += s2[m1] - d1 + 1;
		}
		else {
			sum += 2 * (s2[m1] - d1 + 1);
		}
		for (int i = 1; i < m2; ++i) {
			sum += s1[i];
		}
		if (is_su(m2)) {
			sum += d2;
		}
		else {
			sum += 2 * d2;
		}
		if (is_run(y1) && m1 <= 2) {
			sum++;
		}
		if (is_run(y2) && m2 > 2) {
			sum++;
		}
	}
	return sum;
}
int main()
{
	int y1 = 0, y2 = 0;
	int m1 = 0, m2 = 0;
	int d1 = 0, d2 = 0;
	while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2) {
		int sum = 0;
		sum = Money(y1, m1, d1, y2, m2, d2);
		cout << sum << endl;
	}
	system("pause");
	return 0;
}