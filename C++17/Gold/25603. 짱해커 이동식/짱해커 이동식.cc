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
	ll n, k;
	cin >> n >> k;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll ans = 0;
	ll m = 1000000001;
	ll cnt = 0;
	for (ll i = 0; i < k; i++) {
		if (v[i] == m) {
			cnt++;
		}
		else if (v[i] < m) {
			cnt = 1;
			m = v[i];
		}
	}
	ans = max(m, ans);

	for (ll i = k; i < n; i++) {
		if(v[i-k] == m)
			cnt--;
		if (v[i] < m) {
			m = v[i];
			cnt = 1;
			ans = max(m, ans);
		}
		else if (v[i] == m) {
			cnt++;
			ans = max(m, ans);
		}
		else if(cnt<=0) {
			cnt = 0;
			m = 1000000001;
			for (ll j = i-k+1; j <= i; j++) {
				if (v[j] == m) {
					cnt++;
				}
				else if (v[j] < m) {
					cnt = 1;
					m = v[j];
				}
			}
			ans = max(m, ans);
		}
	}
	cout << ans;
	return 0;
}

