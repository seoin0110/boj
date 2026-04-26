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
	
	ll n;
	cin >> n;
	vector<pair<ll, ll> > v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	ll cnt = 0;
	for (ll i = 0; i < n; i++) {
		ll ans = 1;
		for (ll j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (v[i].first >= v[j].first && v[i].second > v[j].second) {
				ans = 0;
				break;
			}
			if (v[i].second >= v[j].second && v[i].first > v[j].first) {
				ans = 0;
				break;
			}
			else {
				continue;
			}
		}
		if (ans) {
			cnt++;

		}

	}
	cout << cnt;
	return 0;
}