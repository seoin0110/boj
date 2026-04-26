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

const ll inf = 999999999;
ll mm[501][501];
ll dp[501][501];
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	ll n;
	cin >> n;
	for (ll i = 0; i < n;i++) {
		for (ll j = 0; j <= i;j++) {
			cin >> mm[i][j];
		}
	}
	dp[0][0] = mm[0][0];
	for (ll i = 1; i < n;i++) {
		dp[i][0] = dp[i - 1][0] + mm[i][0];
		dp[i][i] = dp[i][i - 1] + mm[i][0];
	}

	for (ll i = 1; i < n;i++) {
		for (ll j = 1; j <= i;j++) {
			dp[i][j] = max({ dp[i - 1][j - 1] + mm[i][j],  dp[i - 1][j] + mm[i][j] });
		}
	}
	ll ans = 0;
	for (ll i = 0; i < n;i++) {
		ans = max(ans, dp[n - 1][i]);
	}
	cout << ans << '\n';
	return 0;
}
