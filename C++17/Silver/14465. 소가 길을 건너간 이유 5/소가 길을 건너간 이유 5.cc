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
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n,k,b;
	cin >> n >> k >> b;
	vector<ll>v(n+1, 0);
	for (ll i = 0; i < b; i++) {
		ll tmp;
		cin >> tmp;
		v[tmp] = 1;
	}
	for (ll i = 1; i <= n; i++) {
		v[i] += v[i - 1];
	}
	ll ans = v[k] - v[0];
	for (ll i = k; i <= n; i++) {
		ans = min(ans, v[i] - v[i - k]);
	}
	cout << ans;
	return 0;
}