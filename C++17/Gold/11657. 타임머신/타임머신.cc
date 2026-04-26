#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
using namespace std;
using ll = long long;

vector<pair<ll,ll>>v[501];
ll d[501];
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	ll n, m;
	d[0] = 1000000000000000;
	d[1] = 0;
	cin >> n >> m;
	for (ll i = 0;i < m;i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
	}
	for (ll i = 2;i <= n;i++) {
		d[i] = 1000000000000000;
	}
	bool nc = false;
	for (ll i = 1;i <= n;i++) {
		for (ll j = 1;j <= n;j++) {
			if (d[j] == d[0]) continue;
			for (ll k = 0;k < v[j].size();k++) {
				if (d[v[j][k].first] > v[j][k].second + d[j]) {
					if (i == n)nc = true;
					d[v[j][k].first] = v[j][k].second + d[j];
				}
			}
		}

	}
	if(nc == true)
		cout << "-1\n";
	else
		for (ll i = 2;i <= n;i++) {
			if (i >= 2) {
				if (d[i] == d[0])
					cout << "-1\n";
				else
					cout << d[i] << '\n';
			}
		}



}
