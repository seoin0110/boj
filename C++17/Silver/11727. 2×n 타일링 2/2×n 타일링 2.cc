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
ll dp[1001];

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	ll n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 3;
	for (ll i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
	}
	cout << dp[n] % 10007;
	return 0;
}