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

set<string>s;
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll>v(n + 1,0);
		for (ll i = 1; i <= n; i++) {
			cin >> v[i];
			v[i] += v[i - 1];
		}
		ll ans = -1000000000000;
		for (ll i = 1; i <= n; i++) {
			for (ll j = 0; j < i; j++) {
				ans = max(ans, v[i] - v[j]);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
