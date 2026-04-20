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
ll dp[100001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll n, k;
	cin >> n >> k;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	dp[n - 1] = k * (n - 1) + 100 * v[n - 1];
	for (ll i = n - 2; i >= 0; i--) {
		dp[i] = min(dp[i + 1], k * i + 100 * v[i]);
	}
	ll ans = 0;
	for (ll i = 0; i < n - 1; i++) {
		ans = max(ans, 100 * v[i] + k * i - k - dp[i]);
	}
	cout << ans;

	return 0;
}