#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using PP = pair<ll, P>;
const ll n_ = 1e6 + 100, inf = 1e18, mod = 1e9 + 7, sqrtN = 320;
ll dy[4] = { -1,0,1,0 }, dx[4] = { 0,1,0,-1 };
ll n, m, k, tc = 1, a, b, c, d, sum, x, y, z, base = 1, ans;
void solve() {
	cin >> n;
	vector<ll>v(n), ANS(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	a = 0;
	while (1) {
		ll now = a;
		while (a < n && v[a] == v[now])a++;
		for (int i = now; i < a; i++) {
			if (a != n)ANS[i] = a;
			else ANS[i] = -2;
		}
		if (a==n)break;
	}
	for (auto nxt : ANS)cout << nxt + 1 << ' ';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	//cin >> tc;
	while (tc--)solve();
}