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
#define inf 10000000000;
vector<pair<ll,ll> >v[1001];
ll ans[1001];
priority_queue<pair<ll,ll> > pq;
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	ll n, m;
	ll st, dst;
	cin >> n >> m;
	for(ll i = 0; i < m; i++){
		ll a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({b, c});

	}
	for(ll i = 1; i <= n; i++)ans[i] = inf;
	cin >> st >> dst;
	ans[st] = 0;

	pq.push({0, st});
	while(!pq.empty()){
		pair<ll,ll> tmp = pq.top();
		pq.pop();
		if(ans[tmp.second] < tmp.first) continue;
		for(auto x: v[tmp.second]){
			if(ans[x.first] > tmp.first + x.second) {
				pq.push({tmp.first + x.second, x.first});
				ans[x.first] = tmp.first + x.second;
			}
		}
	}

	cout << ans[dst];
	return 0;

}
