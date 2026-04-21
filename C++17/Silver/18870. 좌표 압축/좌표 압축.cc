#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;
pair<ll,ll> x[1000000];
ll ans[1000000];
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;

	for (ll i = 0; i < n; i++) {
		cin >> x[i].first;
		x[i].second = i;
	}

	vector<ll>x2(n);
	sort(x, x+n);
	for (ll i = 0; i < n; i++) {
		x2[i] = x[i].first;
	}
	x2.erase(unique(x2.begin(), x2.end()), x2.end());
	for (ll i = 0; i < n; i++) {
		ans[x[i].second] = lower_bound(x2.begin(), x2.end(), x[i].first) - x2.begin();
		//ans2[x[i].second] = x[i].first;
	}
	for (ll i = 0; i < n; i++) {

		cout << ans[i] << ' ';
	}
	return 0;
}

