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
	priority_queue<ll,vector<ll>,greater<> >pq;
	ll n, m;
	cin >> n >> m;
	vector<ll>v(n);
	ll c = 0;
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		if (c >= v[i]) {
			c -= v[i];
		}
		else {
			c = m - v[i];
			ans++;
		}
	}
	cout << ans;

	return 0;
}