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

//정점 20000, 간선 300000, 가중치 10 이하

vector<pair<ll, ll>>v[20001];
priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<>>pq;
ll d[20001];
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	ll m, e, w;
	cin >> m >> e >> w;
	for (ll i = 0;i < e;i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
	}
	for (ll i = 0;i <= m;i++) {
		d[i] = 1000000000000000000;
	}
	d[w] = 0;
	pq.push({ 0, w });
	while (!pq.empty()) {
		if (d[pq.top().second] < pq.top().first) {
			pq.pop();
			continue;
		}
		for (ll i = 0;i < v[pq.top().second].size();i++) {
			if (d[v[pq.top().second][i].first] <= pq.top().first + v[pq.top().second][i].second)continue;
			d[v[pq.top().second][i].first] = pq.top().first + v[pq.top().second][i].second;
			pq.push({ d[v[pq.top().second][i].first],v[pq.top().second][i].first });
		}
		pq.pop();
	}

	for (ll i = 1;i <= m;i++) {
		if (d[i] != 1000000000000000000)
			cout << d[i] << '\n';
		else
			cout << "INF\n";
	}
}
