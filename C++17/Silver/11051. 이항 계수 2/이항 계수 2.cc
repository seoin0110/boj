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

ll dp[1001][1001];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n, k;
	cin >> n >> k;
	for (ll i = 1; i < 1001; i++) {
			dp[i][0] = 1;
			dp[i][i] = 1;
			dp[i][1] = i;
			dp[i][i - 1] = i;
	}
	dp[1][1] = 1;
	dp[2][1] = 2;
	dp[2][2] = 1;
	for (ll i = 3; i <= n; i++) {
		for (ll j = 1; j <= i; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
		}
	}
	cout << dp[n][k] % 10007;
	return 0;
}