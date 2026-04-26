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
using namespace std;
using ll = long long;
//vector<ll>v[1001];
ll n;
bool connected[1001][1001] = { false , };
bool c[1001] = { false, };
bool c2[1001] = { false, };
void dfs(ll x) {
	c[x] = true;
	cout << x << ' ';
	for (int i = 1;i <= n;i++) {
		if (connected[x][i] && !c[i])
			dfs(i);
	}
}

void bfs(ll x) {
	queue<ll>q;
	q.push(x);
	c2[x] = true;
	while (q.size()) {
		ll temp = q.front();
		cout << temp << ' ';
		q.pop();
		for (int i = 1; i <= n;i++) {
			if (connected[temp][i] && !c2[i]) {
				q.push(i);
				c2[i] = true;
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	ll m, v;
	ll a, b;
	cin >> n >> m >> v;
	for (ll j = 0;j < m;j++)
	{
		cin >> a >> b;
		connected[a][b] = true;
		connected[b][a] = true;
	}

	dfs(v);
	cout << '\n';
	bfs(v);
	cout << '\n';
}
