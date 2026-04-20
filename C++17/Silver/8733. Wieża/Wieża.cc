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
ll dp[100001][2];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll n, m;
	cin >> n >> m;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (ll i = 1; i < n; i++) {
		v[i] = max(v[i], v[i - 1]);
	}
	for (ll i = 0; i < m; i++) {
		ll k;
		cin >> k;
		ll idx = lower_bound(v.begin(), v.end(), k) - v.begin();
		cout << idx << " ";
	}
	return 0;
}