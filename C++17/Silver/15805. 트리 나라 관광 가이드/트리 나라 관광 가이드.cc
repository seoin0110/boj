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
ll par[10000000];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	ll k = 0;
	vector<ll>v(n);
	for (ll i = 0; i < 10000000; i++)
		par[i] = -2;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		k = max(k, v[i]);
	}
	par[v[0]] = -1;
	for (ll i = 1; i < n; i++) {
		if (par[v[i]] == -2) {
			par[v[i]] = v[i - 1];
		}
	}
	cout << k + 1 << '\n';
	for (ll i = 0; i <= k; i++)
		cout << par[i] << ' ';
	return 0;
}