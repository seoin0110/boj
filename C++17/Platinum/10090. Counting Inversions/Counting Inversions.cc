#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

ll arr[1000000];
ll tree[4000000];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, m;
	cin >> n;
	vector<pair<ll,ll> >v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}
	sort(v.begin(), v.end(),greater<>());
	ll base;
	for (base = 1; base < n; base *= 2);
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ans += (n - v[i].second - 1);
		ll b = base + v[i].second + 1;
		ll c = base + n - 1;

		while (b <= c) {
			if (b % 2) {
				ans -= tree[b];
				b++;
			}
			if (!(c % 2)) {
				ans -= tree[c];
				c--;
			}
			b /= 2;
			c /= 2;
		}
		b = base + v[i].second;
		tree[b] += 1;
		b /= 2;
		while (b >= 1) {
			tree[b] = tree[b * 2] + tree[b * 2+1];
			b /= 2;
		}


	}

	cout << ans;


	return 0;
}

