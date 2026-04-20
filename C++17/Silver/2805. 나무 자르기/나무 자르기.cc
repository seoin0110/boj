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
	ll n, m;
	cin >> n >> m;
	vector<ll>v(n);
	ll r = 0;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		r = max(r, v[i]);
	}

	ll l = 0;
	while(l < r) {
		ll mid = (l + r) / 2;
		ll sum = 0;
		for (ll i = 0; i < n; i++) {
			if (v[i] > mid) {
				sum += v[i] - mid;
			}
		}
		if (sum >= m) {
			l = mid + 1;
		}
		else {
			r = mid;
		}
	}

	cout << l - 1 << endl;
	return 0;
}