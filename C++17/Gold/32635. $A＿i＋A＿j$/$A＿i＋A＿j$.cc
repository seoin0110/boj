#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll inf = 1e18;

vector<pair<ll, ll> >arr[1000001];
pair<ll, pair<ll, ll> > ans[1000001]; // 첫번째는 ans cost, 두번째는 최소, 두번째 최소
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, m;
	cin >> n >> m;
	vector<ll>a(n + 1);
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		ans[i].first = inf;
		ans[i].second = { inf, inf };
	}
	ll s, t;
	cin >> s >> t;
	for (ll i = 0; i < m; i++) {
		ll u, v, c;
		cin >> u >> v >> c;
		arr[u].push_back({ v, c });
	}
	priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<>> pq;
	pq.push({ 0, s });
	ans[s].first = 0;
	ans[s].second = { a[s], inf };
	ll cnt = 0;
	while (!pq.empty()) {
		pair<ll, ll> tmp = pq.top();
		pq.pop();
		if (ans[tmp.second].first < tmp.first) continue;
		for (auto x : arr[tmp.second]) {
			cnt++;
			if (ans[x.first].first > tmp.first + x.second) {
				pq.push({ tmp.first + x.second, x.first });
				ans[x.first].first = tmp.first + x.second;
				// ans[x.first].second
				if (a[x.first] < ans[tmp.second].second.first) {
					ans[x.first].second.first = a[x.first];
					ans[x.first].second.second = ans[tmp.second].second.first;
				}
				else if (a[x.first] < ans[tmp.second].second.second) {
					ans[x.first].second.first = ans[tmp.second].second.first;
					ans[x.first].second.second = a[x.first];
				}
				else {
					ans[x.first].second.first = ans[tmp.second].second.first;
					ans[x.first].second.second = ans[tmp.second].second.second;
				}

			}
			else if (ans[x.first].first == tmp.first + x.second) {
				// ans[x.first].second
				ll tmp1, tmp2;
				ll tmp3, tmp4;
				if (a[x.first] < ans[tmp.second].second.first) {
					tmp1 = a[x.first];
					tmp2 = ans[tmp.second].second.first;
				}
				else if (a[x.first] < ans[tmp.second].second.second) {
					tmp1 = ans[tmp.second].second.first;
					tmp2 = a[x.first];
				}
				else {
					tmp1 = ans[tmp.second].second.first;
					tmp2 = ans[tmp.second].second.second;
				}
				if (tmp1 + tmp2 < ans[x.first].second.first + ans[x.first].second.second) {
					ans[x.first].second.first = tmp1;
					ans[x.first].second.second = tmp2;
					pq.push({ tmp.first + x.second, x.first });
				}

			}
		}
	}
	if (ans[t].first == inf) {
		cout << -1;
		return 0;
	}
	else {
		cout << ans[t].second.first + ans[t].second.second;
	}
	return 0;
}