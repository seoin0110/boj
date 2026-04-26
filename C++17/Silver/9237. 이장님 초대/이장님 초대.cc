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

vector<ll>v[2];

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	
	cin >> n;
	/*
	for (ll i = 0;i < n;i++) {
		ll a;
		cin >> a;
		v[2].resize(a + 1);
		for (ll k = 0; k < 2;k++) {
			for (ll j = 0; j < a;j++) {
				cin >> v[j][k];
			}
		}
		if (a == 1) {
			cout << max(v[0][0], v[0][1]);
			return 0;
		}


	}
	*/
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater < ll > ());
	ll ans = 0;
	for (ll i = 0; i < n;i++) {
		ans = max(v[i] + i + 2, ans);
	}
	cout << ans << '\n';
    return 0;
}