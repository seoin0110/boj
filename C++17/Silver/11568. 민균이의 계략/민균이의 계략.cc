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
ll mm[1001];
ll dp[1001];
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	ll n;
	cin >> n;
	for (ll i = 0; i < n;i++) {
		cin >> mm[i];
		dp[i] = 1;
	}
	dp[0] = 1;
	for (ll i = 1; i < n;i++) {
		for (ll j = 0; j < i;j++) {
			if (mm[i] > mm[j]) {
				dp[i] = max( dp[i], dp[j] + 1);
			}
		}

	}
	ll ans = 0;
	for (ll i = 0; i < n;i++) {
		ans = max(dp[i], ans);
	}

	cout << ans <<'\n';

	return 0;
}

