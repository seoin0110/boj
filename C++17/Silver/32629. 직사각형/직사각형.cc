#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll inf = 1e10;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;
	while (t--) {
		ll a;
		cin >> a;
		ll ans = 0;
		if (a == (ll)sqrt(a) * (ll)sqrt(a)) {
			ans = (ll)sqrt(a) * 4;
		}
		else {
			ll tmp = (ll)sqrt(a);
			if (tmp * (tmp + 1) >= a) {
				ans = (2 * tmp + 1) * 2;
			}
			else {
				ans = ((ll)sqrt(a) + 1)*4;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}