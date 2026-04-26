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

deque<ll>d;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	for (int i = 0; i < n;i++) {
		string s;
		cin >> s;
		if (s == "push_front")
		{
			ll a;
			cin >> a;
			d.push_front(a);
		}
		if (s == "push_back")
		{
			ll a;
			cin >> a;
			d.push_back(a);
		}
		else if (s == "front") {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else
				cout << d.front() << '\n';
		}
		else if (s == "back") {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else
				cout << d.back() << '\n';
		}
		else if (s == "pop_front") {
			if (d.empty() == 1)
				cout << -1 << '\n';
			else
			{
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (d.empty() == 1)
				cout << -1 << '\n';
			else
			{
				cout << d.back() << '\n';
				d.pop_back();
			}
		}
		else if (s == "size") {
			cout << d.size() << '\n';
		}
		else if (s == "empty") {
			cout << d.empty() << '\n';
		}
	}

	return 0;
}
