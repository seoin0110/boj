#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;
using ll = long long;
ll dp[1000][15] = { 0, };
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	for (ll i = 0;i < 15;i++)
		dp[0][i] = i;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {

		ll n, k;
		cin >> k >> n;
		for (ll j = 1;j <= k;j++) {
			{
				for (ll l = 1;l <= n;l++) {
					for (ll m = 1; m <= l; m++)
						dp[j][l] = dp[j][l] + dp[j-1][m];
				}
			}
		}
		cout << dp[k][n] << '\n';
		for (int j = 1; j <= k;j++) {
			for (int l = 0; l <= n;l++) {
				dp[j][l] = 0;
			}
		}
	}
	
	return 0;
}