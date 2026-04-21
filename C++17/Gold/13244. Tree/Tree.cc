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
	while (n--) {
		ll node ,edge;
		cin >> node >> edge;
		vector<ll>chk(node, 0);
		vector<ll>v[1000];
		ll tree = 1;
		ll a, b;
		for (ll i = 0; i < edge; i++) {
			cin >> a >> b;
			v[a - 1].push_back(b-1);
			v[b - 1].push_back(a-1);
		}
		if (node != edge + 1) {
			cout << "graph\n";
			continue;
		}
		else {
			queue<pair<ll, ll> >q;
			for (ll i = 0; i < v[a - 1].size(); i++) {
				q.push({ a - 1, v[a - 1][i] });
				chk[v[a - 1][i]] = 1;
			}
			chk[a - 1] = 1;
			while (!q.empty()) {
				pair<ll, ll> tmp = q.front();
				q.pop();
				chk[tmp.first] = 1;
				chk[tmp.second] = 1;
				for (ll i = 0; i < v[tmp.second].size(); i++) {
					if (v[tmp.second][i] == tmp.first)
						continue;
					else {
						if (chk[v[tmp.second][i]] == 1) {
							tree = 0;
							break;
						}
						else {
							q.push({ tmp.second, v[tmp.second][i] });
						}
					}
				}
				if (tree == 0)
					break;
			}
			for (ll i = 0; i < node; i++) {
				if (chk[i] == 0)
					tree = 0;
			}
			if (tree) {
				cout << "tree\n";
			}
			else
				cout << "graph\n";
		}
	}
	return 0;
}