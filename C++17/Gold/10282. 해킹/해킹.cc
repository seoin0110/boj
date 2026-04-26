#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll inf = 1e10;

ll ans[10001];
int main(void) {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	while (t--) {
		ll n, d, c;
		cin >> n >> d >> c;
		for (ll i = 0; i <= n; i++)ans[i] = inf;
		ans[c] = 0;
		priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<> > pq;
		vector<pair<ll, ll> >v[10001];
		for (ll i = 0; i < d; i++) {
			ll a1, a2, a3;
			cin >> a1 >> a2 >> a3;
			v[a2].push_back({ a1, a3 });
		}
		ll time = 0;
		ll cnt = 0;
		pq.push({0, c});
		while (!pq.empty()) {
			pair < ll, ll> tmp = pq.top();
			pq.pop();
			for (auto x : v[tmp.second]) {
				if (ans[x.first] > tmp.first + x.second) {
					pq.push({ tmp.first + x.second, x.first });
					ans[x.first] = tmp.first + x.second;
				}
			}
		}
		for (ll i = 1; i <= n; i++) {
			if (ans[i] != inf) {
				cnt++;
				time = max(time, ans[i]);
			}
		}
		cout << cnt << ' ' << time << '\n';
	}
	
	return 0;
}