#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
using ll = long long;
bool check[100011];

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int ans = 1;
	string s;

	while (1) {
		string s;
		getline(cin, s);
		if (s == ".")
			break;
		stack<char>st;
		ans = 1;
		for (int i = 0;i < s.size();i++) {
			if (s[i] == '[' || s[i] == '(')
				st.push(s[i]);
			if (s[i] == ']')
			{
				if (!st.empty()&&st.top() == '[')
				{
					st.pop();
					continue;
				}
				else
				{
					ans = 0;
					break;
				}
			}
			else if (s[i] == ')')
			{
				if (!st.empty() && st.top() == '(')
				{
					st.pop();
					continue;
				}
				else
				{
					ans = 0;
					break;
				}
			}
		}
		if (!st.empty())
			ans = 0;

		if (ans == 1)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	
}