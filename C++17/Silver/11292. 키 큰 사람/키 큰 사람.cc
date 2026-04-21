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
#include <set>
#include <cstring>
#define ll long long
using namespace std;

ll inf = 1000000007;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	while (n!=0) {
		float bigger = 0.0f;
		vector<pair<float, string> >v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i].second >> v[i].first;
			bigger = max(v[i].first, bigger);
		}
		/*
		sort(v.begin(), v.end(), greater<>());
		stack<string>st;
		float tmp = v[0].first;
		st.push(v[0].second);
		ll j = 1;
		while (j < n && tmp == v[j].first)
		{
			st.push(v[j].second);
			j++;
		}
		while (!st.empty()) {
			cout << st.top() << ' ';
			st.pop();
		}
		*/
		for (ll i = 0; i < n; i++) {
			if (bigger == v[i].first) {
				cout << v[i].second << ' ';
			}
		}
		cout << '\n';
		cin >> n;
	}
}