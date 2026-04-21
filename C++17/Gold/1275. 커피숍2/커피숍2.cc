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
using ll = long long;
using namespace std;
//ll arr[100000];
ll seg[400000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n, q;
	cin >> n >> q;
	ll base = 1;
	for (base = 1; base < n; base *= 2);
	for (ll i = 0; i < n; i++)
		cin >> seg[base + i];
	for (ll i = base - 1; i >= 0; i--) {
		seg[i] = seg[i * 2] + seg[i * 2 + 1];
	}
	while (q--) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		
		if (a > b)
			swap(a,b);
		ll ans = 0;
		a = base + a - 1;
		b = base + b - 1;
		while (a <= b) {
			if (a % 2 == 1) {
				ans += seg[a];
				a++;
			}
			if (b % 2 == 0) {
				ans += seg[b];
				b--;
			}
			a /= 2;
			b /= 2;
		}
		cout << ans << '\n';
		c = base + c - 1;
		seg[c] = d;
		c /= 2;
		while (c > 0) {
			seg[c] = seg[2 * c] + seg[2 * c + 1];
			c /= 2;
		}


	}
	return 0;
}