#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <functional>
#include <string>

using namespace std;
using ll = long long;
ll check[1001];
ll cnt = 0;
ll ans = 0;

int main() {

	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	while (n--) {
		cnt = 0;
		ans = 0;
		ll a;
		cin >> a;
		for (ll i = 1; i <= a; i++) {
			check[i] = 0;
		}
		vector<ll>v(a + 1);
		for (ll i = 1; i <= a; i++) {
			cin >> v[i];
		}
		for (ll i = 1; i <= a; i++) {
			if (check[i] == 1)
				continue;
			ll tmp = i;
			while (check[tmp]==0 && cnt!=a) {
				check[tmp] = 1;
				cnt++;
				tmp = v[tmp];
			}
			ans++;
		}
		cout << ans << '\n';
		
	}

	return 0;
}
