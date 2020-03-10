#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int con = 0;
		queue<char> q;
		for (int i = 0; i < n; i++)
		{
			char ID;
			cin >> ID;
			string OP;
			cin >> OP;
			if (OP == "connect")
				q.push(ID);
			else
			{
				con = q.size() > con ? q.size() : con;
				q.pop();
			}
		}
		cout << con << endl;
	}
	return 0;
}