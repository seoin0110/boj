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
	set<ll>s;
	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}
	for (ll i = 1; i < ((ll)1 << n); i++) {
		ll now = 0;
		for (ll j = 0; j < n; j++) {
			if (((ll)i >> j) % 2 == 1) {
				now += v[j];
			}
		}
		s.insert(now);
	}
	cout << sum - s.size();
	return 0;
}