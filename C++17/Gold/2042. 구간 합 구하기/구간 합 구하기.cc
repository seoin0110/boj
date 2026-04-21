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
	ll n, m, k;
	cin >> n >> m >> k;
	ll base;
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (base = 1; base < n; base *= 2);
	for (ll i = 0; i < n; i++) {
		tree[base + i] = arr[i];
	}
	for (ll i = base - 1; i >= 1; i--) {
		tree[i] = tree[2 * i] + tree[2 * i + 1];
	}

	ll a, b, c, d;
	d = 0;
	while (d < m + k) {
		ll ans = 0;
		cin >> a >> b >> c;
		if (a == 1) {
			b = base + b - 1;
			tree[b] = c;
			b /= 2;
			while (b >= 1) {
				tree[b] = tree[b * 2] + tree[b * 2 + 1];
				b /= 2;
			}
		}
		else {
			b = base + b - 1;
			c = base + c - 1;
			while (b <= c) {
				if (b % 2) {
					ans += tree[b];
					b++;
				}
				if (!(c % 2)) {
					ans += tree[c];
					c--;
				}
				b /= 2;
				c /= 2;
			}
			cout << ans << '\n';
		}
		d++;
	}



	return 0;
}

