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
	ll n;
	cin >> n;
	vector<pair<ll, ll> >v(n);
	vector<ll>k(1001,0);
	ll ma = 0;
	ll ma_in_min = 9999;
	ll ma_in_max = -1;
	for (ll i = 0; i < n;i++) {
		cin >> v[i].first >> v[i].second;
		k[v[i].first] = v[i].second;
	}
	sort(v.begin(), v.end());
	ll mi_in = v[0].first;
	ll ma_in = v[n - 1].first;
	for (ll i = 0; i < n;i++) {
		ma = max(ma,v[i].second);
	}
	for (ll i = 0; i < n;i++) {
		if (v[i].second == ma)
		{
			ma_in_min = min(i, ma_in_min);
			ma_in_max = max(i, ma_in_max);
		}
	}
	ll ans = 0;
	ans += (v[ma_in_max].first - v[ma_in_min].first + 1)*ma;
	ma = 0;
	for (ll i = mi_in; i < v[ma_in_min].first;i++) {
		ma = max(k[i], ma);
		ans += ma;
	}
	
	ma = 0;
	for (ll i = ma_in;i > v[ma_in_max].first;i--) {
		ma = max(k[i], ma);
		ans += ma;
	}

	cout << ans <<'\n';

	return 0;
}