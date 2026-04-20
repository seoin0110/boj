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

	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	dp[0][0] = (v[0] == 1 ? 1 : -1);
	dp[0][1] = (v[0] == 2 ? 1 : -1);
	ll ans = 1;
	for (ll i = 1; i < n; i++) {
		dp[i][0] = max(dp[i - 1][0] + (v[i] == 1 ? 1 : -1), (ll)(v[i] == 1 ? 1 : -1));

		dp[i][1] = max(dp[i - 1][1] + (v[i] == 2 ? 1 : -1), (ll)(v[i] == 2 ? 1 : -1));
		ans = max({ ans, abs(dp[i][0]), abs(dp[i][1]) });
	}
	cout << ans;


	return 0;
}