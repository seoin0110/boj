#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>

using namespace std;
using ll = long long;

stack<ll>st;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	for (int i = 0; i < n;i++) {
		string s;
		cin >> s;
		if (s == "push")
		{
			ll a;
			cin >> a;
			st.push(a);
		}
		else if (s == "top") {
			if (st.empty() == 1) {
				cout << -1 << '\n';
			}
			else
				cout << st.top() << '\n';
		}
		else if (s == "pop") {
			if (st.empty() == 1)
				cout << -1 << '\n';
			else
			{
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (s == "size") {
			cout << st.size() << '\n';
		}
		else if (s == "empty") {
			cout << st.empty() << '\n';
		}
	}

	return 0;
}
