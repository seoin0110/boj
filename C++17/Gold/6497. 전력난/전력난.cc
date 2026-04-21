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
ll par[200000];
ll find(ll a) {
	if (par[a] == -1)
		return a;
	return par[a] = find(par[a]);
}
bool uni(ll a, ll b) {
	ll x = find(a);
	ll y = find(b);
	if (x != y) {
		par[x] = y;
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	ll n, m;
	cin >> n >> m;
	while (!(n == 0 && m == 0)) {
		ll sum = 0;
		ll ans = 0;
		for (ll i = 0; i < n; i++)
			par[i] = -1;
		vector<pair<ll, pair<ll, ll> > > v(m);
		for (ll i = 0; i < m; i++) {
			cin >> v[i].second.first >> v[i].second.second >> v[i].first;
			sum += v[i].first;
		}
		sort(v.begin(), v.end());
		ll j = 0;
		for (ll i = 0; i < m; i++) {
			if (uni(v[i].second.first, v[i].second.second)) {
				j++;
				ans += v[i].first;
			}
			if (j == n - 1)
				break;
		}
		cout << sum - ans << '\n';
		cin >> n >> m;
	}
	return 0;
}