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

	ll base;
	for (base = 1; base < n; base *= 2);
	for (ll i = 0; i < n; i++) {
		cin >> tree[base+i];
	}
	for (ll i = base - 1; i >= 1; i--) {
		tree[i] = 0;
	}

	ll a, b, c, d;
	ll k = 0;
	cin >> m;
	while (k < m) {
		ll ans = 0;
		cin >> a;
		if (a == 2) {
			cin >> b;
			b = base + b - 1;
			ans = tree[b];
			b /= 2;
			while (b >= 1) {
				ans += tree[b];
				b /= 2;
			}
			cout << ans << '\n';
		}
		else {
			cin >> b >> c >> d;
			b = base + b - 1;
			c = base + c - 1;
			while (b <= c) {
				if (b % 2) {
					tree[b] += d;
					b++;
				}
				if (!(c % 2)) {
					tree[c] +=d;
					c--;
				}
				b /= 2;
				c /= 2;
			}
		}
		k++;
	}



	return 0;
}

