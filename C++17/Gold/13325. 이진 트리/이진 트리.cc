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
	ll n;
	ll tmp = 1;
	ll tmp2 = 1;
	cin >> n;
	for (ll i = 0; i <= n; i++, tmp *= 2);
	tmp2 = tmp / 2;
	tmp -= 2;
	vector<ll>check(tmp + 2, 0);
	vector<ll>v(tmp+2,0);
	for (ll i = 2; i <= tmp+1; i++) {
		cin >> v[i];
	}
	for (ll i = tmp2; i <= tmp+1; i++) {
		check[i] = v[i];
	}
	for (ll i = tmp2 - 1; i >= 1; i--) {
		check[i] = max(check[i * 2], check[i * 2 + 1]);
		v[i * 2] += check[i] - check[i * 2];
		v[i*2+1] += check[i] - check[i * 2+1];
		check[i] += v[i];
	}
	ll ans = 0;
	for (ll i = 2; i <= tmp + 1; i++) {
		ans += v[i];
	}
	cout << ans;

	return 0;
}