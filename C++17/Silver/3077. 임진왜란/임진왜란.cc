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
	map<string, ll> m;
	for (ll i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		m[tmp] = i + 1;
	}
	vector<string>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll ans = 0;
	ll total = n * (n - 1) / 2;
	for (ll i = 0; i < n; i++) {
		for (ll j = i + 1; j < n; j++) {
			if (m[v[i]] < m[v[j]]) {
				ans++;
			}
		}
	}
	cout << ans << "/" << total;
	return 0;
}