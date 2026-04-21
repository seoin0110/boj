#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

ll dfss[10001];
ll finished[10001];
stack<ll>st;
vector<ll>v[10001];
vector<vector<ll> >scc;
ll snn[10001];
ll SN;
ll cnt = 0;
ll dfs(ll x) {
	dfss[x] = ++cnt;
	st.push(x);
	ll tmp = dfss[x];
	for (ll i = 0; i < v[x].size(); i++) {
		if (dfss[v[x][i]] == 0)tmp = min(tmp, dfs(v[x][i]));
		else if (finished[v[x][i]] == 0)tmp = min(tmp, dfss[v[x][i]]);
	}
	if (tmp == dfss[x]) {
		vector<ll>sccc;
		while (1) {
			ll a = st.top();
			st.pop();
			sccc.push_back(a);
			finished[a] = 1;
			snn[a] = SN;
			if (a == x)break;
		}
		sort(sccc.begin(), sccc.end());
		scc.push_back(sccc);
		SN++;
	}
	return tmp;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//타잔 알고리즘
	ll vv, e;
	cin >> vv >> e;
	for (ll i = 0; i < e; i++) {
		ll a, b;
		cin >> a >> b;
		v[a].push_back(b);
	}

	for (ll i = 1; i <= vv; i++) {
		if (dfss[i] == 0) {
			dfs(i);
		}
	}

	sort(scc.begin(), scc.end());
	cout << SN << '\n';
	for (ll i = 0; i < SN; i++) {
		for (ll j = 0; j < scc[i].size(); j++) {
			cout << scc[i][j] << ' ';
		}
		cout << "-1\n";
	}
	
	
	
	
	return 0;
}

