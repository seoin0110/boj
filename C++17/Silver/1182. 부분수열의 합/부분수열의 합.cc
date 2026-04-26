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

ll n;
ll b;
ll a[21];
ll c[21];
ll ans = 0;

void func(ll x) {
	if (x == n)
	{
		ll k = 0;
		for (ll i = 0; i < n;i++) {
			if (c[i])
				k += a[i];
		}
		if (k == b)
			ans++;
		return;
	}
	c[x] = 1;
	func(x + 1);
	c[x] = 0;
	func(x + 1);
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> b;
	for (ll i = 0; i < n;i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	func(0);
	if (b == 0)
		cout << ans - 1 << '\n';
	else
		cout << ans << '\n';

	
	return 0;
}