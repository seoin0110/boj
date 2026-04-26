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
	ll n, q;
	cin >> n >> q;
	vector<ll>v(n+1);
	v[0] = 0;
	cin >> v[1];
	for (ll i = 2; i <= n;i++) {
		cin >> v[i];
		v[i] = v[i - 1] ^ v[i];
	}
	ll ans = 0;
	for(ll i = 0; i < q;i++){
		ll a, b;
		cin >> a >> b;
		ans ^= v[b]^v[a - 1];
	}

	cout << ans << '\n';

    return 0;
}