#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;
ll s[3];
ll dp[3];
ll dp2[3];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> s[0] >> s[1] >> s[2];
		ll t1 = max(dp[0] + s[0], dp[1] + s[0]);
		ll t2 = max({ dp[0] + s[1], dp[1] + s[1],dp[2] + s[1] });
		ll t3 = max(dp[1] + s[2], dp[2] + s[2]);
		ll t4 = min(dp2[0] + s[0], dp2[1] + s[0]);
		ll t5 = min({ dp2[0] + s[1], dp2[1] + s[1],dp2[2] + s[1] });
		ll t6 = min(dp2[1] + s[2], dp2[2] + s[2]);
		dp[0] = t1;
		dp[1] = t2;
		dp[2] = t3;
		dp2[0] = t4;
		dp2[1] = t5;
		dp2[2] = t6;
	}

	cout << max({ dp[0], dp[1], dp[2] }) << ' ' << min({ dp2[0], dp2[1], dp2[2] });
	return 0;
}