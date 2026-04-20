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

	set<ll>s;
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (ll i = 0; i < n; i++) {
		for (ll j = i; j < n; j++) {
			s.insert(v[i] + v[j]);
		}
	}

	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			if (s.find(v[i] - v[j]) != s.end()) {
				ans = max(v[i], ans);
			}
		}
	}

	cout << ans;


	return 0;
}