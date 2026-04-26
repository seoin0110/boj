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

ll m[1005][1005];
ll d[1005][1005];
ll inf = 1000000000000000000;
vector<pair<pair<ll, ll>, ll>>v[1005][1005];
priority_queue< pair < pair<ll, ll>, ll>, vector< pair < pair<ll, ll>, ll>>, greater<>>pq;
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, mm, a;
	cin >> n>>mm;
	for (ll i = 1;i <= n;i++) {
		for (ll j = 1;j <= mm;j++) {
			cin >> a;
			if (a < 0) 
				a = inf;
			m[i][j] = a;
			d[i][j] = inf;
		}
	}
	for (ll i = 1;i <= n;i++) {
		for (ll j = 1;j <= mm;j++) {
			if (i <= n) {
				if (m[i + 1][j])
					v[i][j].push_back({ {i + 1,j},m[i + 1][j] });
				else
					v[i][j].push_back({ {i + 1,j},0 });
			}
			if (i >= 2)
			{
				if (m[i - 1][j])
					v[i][j].push_back({ {i - 1,j},m[i - 1][j] });
				else
					v[i][j].push_back({ {i - 1,j},0 });
			}
			if (j <= mm) {
				if (m[i][j + 1])
					v[i][j].push_back({ {i,j + 1},m[i][j + 1] });
				else
					v[i][j].push_back({ { i,j + 1 }, 0 });
			}
			if (j >= 2) {
				if (m[i][j - 1])
					v[i][j].push_back({ {i,j - 1},m[i][j - 1] });
				else
					v[i][j].push_back({ {i,j - 1},0 });
			}
		}
	}
	d[1][1] = m[1][1];
	pq.push({ {1,1},d[1][1] });
	while (pq.size()) {
		auto cur = pq.top();
		pq.pop();
		if (d[cur.first.first][cur.first.second] < cur.second)continue;
		for (auto nxt : v[cur.first.first][cur.first.second]) {
			if (cur.second + nxt.second >= d[nxt.first.first][nxt.first.second])continue;
			d[nxt.first.first][nxt.first.second] = cur.second + nxt.second;
			pq.push({ {nxt.first.first,nxt.first.second},d[nxt.first.first][nxt.first.second] });
		}

	}
	if (d[n][mm] == inf)
		cout << "-1";
	else
		cout << d[n][mm];
}
