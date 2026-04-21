#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll a, b;
		cin >> a >> b;
		vector<ll>check(n + 1, 0);
		queue<pair<ll, ll>> q;
		vector<pair<ll, ll> > p(n + 1);
		for (ll i = 0; i < n + 1; i++) {
			ll c, d;
			cin >> c >> d;
			p[i] = { c,d };
		}
		q.push({ a,b });
		while (!q.empty()) {
			pair<ll, ll> tmp = q.front();
			q.pop();
			for (ll i = 0; i < n + 1; i++) {
				if (check[i] == 0 && abs(tmp.first - p[i].first) + abs(tmp.second - p[i].second) <= 1000) {
					check[i] = 1;
					q.push({ p[i].first, p[i].second });
				}
			}
		}
		if (check[n] == 1) {
			cout << "happy\n";
		}
		else
			cout << "sad\n";
	}
	return 0;
}