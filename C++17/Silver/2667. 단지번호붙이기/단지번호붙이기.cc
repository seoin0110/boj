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

vector<ll>par(626, -1);
ll v[26][26] = { 0, };
ll find(ll a) {
	if (par[a] < 0)
		return a;
	return par[a] = find(par[a]);
}

 bool uni(ll a, ll b) {
	 ll x = find(a);
	 ll y = find(b);
	if (x == y)
		return false;
	ll temp = par[x] + par[y];
	par[x] = temp;
	par[y] = x;
	return true;
}

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);


	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (ll j = 0; j < n;j++) {
			v[i][j] = (ll)(s[j]-'0');
		}
	}
	for (ll i = 0; i < n;i++) {
		for (ll j = 0; j < n;j++) {
			if (v[i][j] == 0) {
				par[i * n + j] = 0;
			}
			if (j < n - 1 && v[i][j] && v[i][j + 1]) {
				uni(i * n + j, i * n + j + 1);
			}
			if (i < n - 1 && v[i][j] && v[i + 1][j]) {
				uni(i * n + j, (i + 1) * n + j);
			}
		}
	}
	vector<ll>ans;
	for (ll i = 0; i < n;i++) {
		for (ll j = 0; j < n;j++) {
			if (par[i * n + j] < 0) {
				ans.push_back((-1) * par[i * n + j]);
			}
		}
	}

	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for (auto nxt : ans) {
		cout << nxt << '\n';
	}


    return 0;
}