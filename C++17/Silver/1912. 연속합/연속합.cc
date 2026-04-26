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


vector<ll>dp;
vector<ll>v;
ll ans ;
ll func(ll n) {

	if (n == 0)
		return dp[0];
	ll a = max(func(n - 1) + v[n], v[n]);
	ans = max(a, ans);
	return dp[n] = a;
}

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	ll n;
	ll k;
	ll start = 0;
	ll connect = 1;
	cin >> n;
	v.resize(n+1);
	dp.resize(n+1, -1111);

	for (ll i = 0; i < n;i++) {
		cin >> v[i];
		
	}
	ans = v[0];
	dp[0] = v[0];
	func(n - 1);
	cout << ans << '\n';

	/*cin >> v[0];
	ans = v[0];
	start = 1;
	for (ll i = 1; i < n;i++) {
		cin >> v[i];
		if (connect == 1) {
			if (ans < ans + v[i]) {
				ans = ans + v[i];
			}
			else
			{
				connect = 0;
			}
		}
		else
		{
			if (ans < v[i]) {
				ans = v[i];
				connect = 1;
			}

		}
	}*/
    return 0;
}