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
ll dp[41];
ll check[41];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	ll k;
	cin >> k;
	for (ll i = 0; i < k; i++) {
		ll tmp;
		cin >> tmp;
		check[tmp] = 1;
	}
	dp[0] = 1;
	for (ll i = 1; i <= n; i++) {
		if (check[i] == 1 || check[i - 1] == 1) {
			dp[i] = dp[i - 1];
		}
		else if (i >= 2) {
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		else if( i >=1) {
			dp[i] = dp[i - 1];
		}
	}
	cout << dp[n];
	return 0;
}