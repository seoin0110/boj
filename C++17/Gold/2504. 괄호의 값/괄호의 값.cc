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
#include <map>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	stack<int>s1;
	stack<ll>s2;
	string s;
	cin >> s;
	ll ans = 0;
	ll tmp = 0;
	for (ll i = 0; i < s.size();i++) {
		if (s[i] == '[')
		{
			s1.push(-2);
		}
		else if (s[i] == '(') {
			s1.push(-1);
		}
		else if (s[i] == ')') {
			tmp = 0;
			while (!s1.empty()) {
				ll t = s1.top();
				s1.pop();
				if (t <0) {
					s1.push(t);
					if(tmp == 0)
						tmp = 1;
					break;
				}
				else
					tmp += t;
			}
			if (!s1.empty() && s1.top() == -1)
			{
				s1.pop();
				s1.push(tmp * 2);
			}
			else
			{
				cout << 0 << '\n';
				return 0;
			}
		}
		else {
			tmp = 0;
			while (!s1.empty()) {
				ll t = s1.top();
				s1.pop();
				if (t <0) {
					s1.push(t);
					if(tmp == 0)
						tmp = 1;
					break;
				}
				else
					tmp += t;
			}
			if (!s1.empty() && s1.top() == -2)
			{
				s1.pop();
				s1.push(tmp * 3);
			}
			else
			{
				cout << 0 << '\n';
				return 0;
			}
		}
	}

	if (s1.size() == 0)
	{
		cout << 0 << '\n';
	}
	else {
		while (!s1.empty()) {
			if (s1.top() < 0) {
				cout << 0 << '\n';
				return 0;
			}
			ans += s1.top();
			s1.pop();
		}
		cout << ans << '\n';
	}

	return 0;
}