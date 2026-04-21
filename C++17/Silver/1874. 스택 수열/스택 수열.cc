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
	vector<ll>v(n);
	ll maxx = 0;
	string ans = "";
	stack<ll>st;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (ll i = 0; i < n; i++) {
		if (maxx < v[i]) {
			for (ll j = maxx+1; j <= v[i]; j++) {
				st.push(j);
				ans += "+\n";
			}
			st.pop();
			ans += "-\n";
			maxx = v[i];
		}
		else if (maxx == v[i]) {
			cout << "NO";
			return 0;
		}
		else {
			if (st.empty()) {
				cout << "NO";
				return 0;
			}
			else {
				if (st.top() != v[i]) {
					cout << "NO";
					return 0;
				}
				else {
					ans += "-\n";
					st.pop();
				}
			}
		}
	}
	cout << ans;
	return 0;
}