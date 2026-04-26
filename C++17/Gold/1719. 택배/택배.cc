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
ll inf = 10000000000;
vector<pair<ll,ll> >v[201];
pair<ll,ll> ans[201][201];

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	ll n, m;
	ll st, dst;
	cin >> n >> m;
	for(ll i = 0; i < m; i++){
		ll a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({b, c});
		v[b].push_back({a, c});

	}
	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= n; j++){
			ans[i][j] = {inf,-1};
		}
		ans[i][i] = {0, -1};
	}

	for(ll i = 1; i<= n;i++){
		priority_queue<pair<ll,ll> > pq;
		pq.push({0, i});
		while(!pq.empty()){
			pair<ll,ll> tmp = pq.top();
			pq.pop();
			if(tmp.first > ans[i][tmp.second].first) continue;
			for(auto x:v[tmp.second]){
				if(x.second + tmp.first < ans[i][x.first].first) {
					pq.push({x.second + tmp.first, x.first});
					ans[i][x.first].first = x.second + tmp.first;
					if(i != tmp.second) {
						ans[i][x.first].second = ans[i][tmp.second].second;
					}else {
						ans[i][x.first].second = x.first;
					}
				}
			}
		}
	}

	for(ll i = 1; i <= n; i++){
		for(ll j = 1; j <= n; j++){
			if(i == j) cout << "- ";
			else {
				cout << ans[i][j].second << ' ';
			}
		}

		cout << '\n';
	}
	return 0;

}
