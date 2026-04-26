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

//vector<ll>v[2];
vector<ll>v[100001];


int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	
	cin >> n;
	/*
	for (ll i = 0;i < n;i++) {
		ll a;
		cin >> a;
		v[2].resize(a + 1);
		for (ll k = 0; k < 2;k++) {
			for (ll j = 0; j < a;j++) {
				cin >> v[j][k];
			}
		}
		if (a == 1) {
			cout << max(v[0][0], v[0][1]);
			return 0;
		}


	}
	*/

	for (ll i = 0; i < n-1; i++) {
		ll a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	vector<bool>check(n+1,0);
	vector<ll>par(n+1, 0);
	queue<ll>q;
	par[1] = 1;
	check[1] = 1;
	q.push(1);
	while (!q.empty()) {
		ll tmp = q.front();
		q.pop();
		for (ll i = 0; i < v[tmp].size();i++) {
			if (check[v[tmp][i]] == 1)
				continue;
			check[v[tmp][i]] = 1;
			par[v[tmp][i]] = tmp;
			q.push(v[tmp][i]);
		}
		check[tmp] = 1;
	}
	for (ll i = 2; i <= n;i++) {
		cout << par[i] << '\n';
	}
    return 0;
}