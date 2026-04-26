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
	cin >> n;
	vector<ll>a(n+1);
	vector<ll>b(n+1);
	vector<ll>c(n+1);
	vector<ll>d(n+1);
	for (ll i = 0; i < n; i++) {
		ll tmp;
		cin >> tmp;
		cin >> a[tmp] >> b[tmp] >> c[tmp] >> d[tmp];
	}
	a[0] = -1, b[0] = -1, c[0] = -1, d[0] = -1;
	ll aa =0 , bb = 0, cc =0 , dd = 0;
	for (ll i = 1; i <= n; i++) {
		if (a[aa] < a[i])
			aa = i;
	}
	for (ll i = 1; i <= n; i++) {
		if (i == aa)
			continue;
		if (b[bb] < b[i])
			bb = i;
	}
	for (ll i = 1; i <= n; i++) {
		if (i == aa || i ==bb)
			continue;
		if (c[cc] < c[i])
			cc = i;
	}
	for (ll i = 1; i <= n; i++) {
		if (i == aa || i == bb || i == cc)
			continue;
		if (d[dd] < d[i])
			dd = i;
	}
	cout << aa << ' ' << bb << ' ' << cc << ' ' << dd;
	return 0;
}