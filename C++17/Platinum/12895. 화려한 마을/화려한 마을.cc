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
#include <random>
#include<functional>

using ll = long long;
using namespace std;

ll arr[100001];
ll tree[400001];
ll lazy[400001];

void update_lazy(ll n, ll s, ll e) {
	if (lazy[n] == 0)return;
	tree[n] = lazy[n];
	if (s != e) {
		lazy[n * 2] = lazy[n];
		lazy[n * 2 + 1] = lazy[n];
	}
	lazy[n] = 0;
}

void update(ll n, ll s, ll e, ll l, ll r, ll val) {
	update_lazy(n, s, e);
	if (l > e || r < s) {
		return;
	}
	if (l <= s && e <= r) {
		tree[n] = val;
		if (s != e) {
			lazy[n * 2] = val;
			lazy[n * 2 + 1] = val;
		}
		return;
	}
	ll mid = (s + e) / 2;
	update(n * 2, s, mid, l, r, val);
	update(n * 2 + 1, mid + 1, e, l, r, val);
	tree[n] = tree[n * 2] | tree[n * 2 + 1];
}

ll sum(ll n, ll s, ll e, ll l, ll r) {
	update_lazy(n, s, e);
	if (l > e || r < s)return 0;
	if (l <= s && e <= r)return tree[n];
	ll mid = (s + e) / 2;
	return sum(n * 2, s, mid,l,r) | sum(n * 2 + 1, mid + 1, e,l,r);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	ll n, m, k;
	cin >> n >> m >> k;

	update(1, 1, n, 1, n, 1);
	for (ll i = 0; i < k; i++) {
		char a;
		cin >> a;
		if (a == 'C') {
			ll s, e, val;
			cin >> s >> e >> val;
			if (s > e)swap(s, e);
			val = ((ll)1 << val - 1);
			update(1, 1, n, s, e, val);
		}
		else {
			ll s, e;
			cin >> s >> e;
			if (s > e)swap(s, e);
			ll y = 0;
			ll x = sum(1, 1, n, s, e);
			while (x) {
				if (x % 2)y++;
				x /= 2;
			}
			cout << y << '\n';

		}
	}

}