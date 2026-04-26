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
	ll n, m;
	cin >> n >> m;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll ans = 0;
	ll idx = 0;
	for (ll i = 0; i < m; i++) {
		ll num;
		cin >> num;
		if (i == 0) {
			idx = num;
		}
		ll cnt = 0;
		for (ll i = 0; i < n; i++) {
			char c;
			cin >> c;
			if (c == 'O') {
				cnt += v[i];
			}
		}
		if (cnt > ans) {
			ans = cnt;
			idx = num;
		}
		else if (cnt == ans) {
			idx = min(idx, num);
		}
	}
	cout << idx << ' ' << ans;
	return 0;
}