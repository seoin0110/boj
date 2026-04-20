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
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 1e9 + 7;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);


	ll n, c;
	cin >> n >> c;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<ll>h1;
	vector<ll>h2;
	for (ll i = 0; i < ((ll)1 << ((n + 1) / 2)); i++) {
		ll now = 0;
		for (ll j = 0; j < (n + 1) / 2; j++) {
			if (((ll)i >> j) % 2 == 1) {
				now += v[j];
			}
		}
		if (now <= c) {
			h1.push_back(now);
		}
	}

	for (ll i = 0; i < ((ll)1 << (n - (n + 1) / 2)); i++) {
		ll now = 0;
		for (ll j = 0; j < (n - (n + 1) / 2); j++) {
			if (((ll)i >> j) % 2 == 1) {
				now += v[j + (n + 1) / 2];
			}
		}
		if (now <= c) {
			h2.push_back(now);
		}
	}
	sort(h1.begin(), h1.end());
	sort(h2.begin(), h2.end());
	ll ans = 0;
	for (auto now : h1) {
		ll up = upper_bound(h2.begin(), h2.end(), c - now) - h2.begin();
		ans += up;
	}
	cout << ans;
	return 0;
}