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
#define ll long long
using namespace std;

ll inf = 1000000007;

ll dp[101];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	ll t;
	cin >> t;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;
	for (ll i = 6; i <= 100; i++) {
		dp[i] = dp[i - 1] + dp[i - 5];
	}
	while (t--) {
		ll n;
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}