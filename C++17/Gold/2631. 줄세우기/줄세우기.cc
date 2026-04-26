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
ll dp[200];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	for (ll i = 0; i < n; i++) {
		dp[i] = 1;
		for (ll j = 0; j < i; j++) {
			if (v[j] < v[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	ll ans = 0;
	for (ll i = 0; i < n; i++)
		ans = max(ans, dp[i]);
	cout << n - ans;

	return 0;
}