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


	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll ans = 0;
	for (ll i = 1; i < ((ll)1 << n); i++) {
		ll tmp_a = 0;
		ll tmp_b = 0;
		for (ll j = 0; j < n; j++) {
			if (((i >> j) % 2) == 1) {
				if (tmp_a == 0) {
					tmp_a = 1;
					tmp_b = v[j];
				}
				else {
					ll tmp = tmp_b * v[j];
					tmp_a = tmp_b + tmp_a * v[j];
					tmp_b = tmp;
				}
			}
		}
		if (100 * tmp_a >= 99 * tmp_b && 100 * tmp_a <= 101 * tmp_b) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}