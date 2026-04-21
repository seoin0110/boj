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

ll dfss[100001];
ll finished[100001];
stack<ll>st;
vector<ll>v[100001];
vector<vector<ll> >scc;
ll snn[100001];
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
			finished[a] = 1;
			snn[a] = SN;
			sccc.push_back(a);
			if (a == x)break;
		}
		scc.push_back(sccc);
		SN++;
	}
	return tmp; //x와 x의 자손들 중 올라갈 수 있는 최소의 dfss값 
}

ll vv, e;
ll A[100001];
ll rev(ll a) {
	if (a <= vv) {
		return vv + a;
	}
	return a - vv;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//타잔 알고리즘
	cin >> vv >> e;
	for (ll i = 0; i < e; i++) {
		ll a, b;
		cin >> a >> b;
		if (a < 0) a = abs(a) + vv;
		if (b < 0) b = abs(b) + vv;
		v[rev(a)].push_back(b);
		v[rev(b)].push_back(a);
	}

	for (ll i = 1; i <= 2*vv; i++) {
		if (dfss[i] == 0) {
			dfs(i);
		}
	}

	//sort(scc.begin(), scc.end());
	//cout << SN << '\n';
	for (ll i = 1; i <=vv; i++) {
		if (snn[i] == snn[i + vv]) {
			cout << "0";
			return 0;
		}
	}
	
	cout << "1\n";
	reverse(scc.begin(), scc.end());
	for (ll i = 0; i < scc.size(); i++) {
		for (ll j = 0; j < scc[i].size(); j++) {
			if (A[scc[i][j]])continue;
			A[scc[i][j]] = 0;
			A[rev(scc[i][j])] = 1;
		}
	}
	for (ll i = 1; i <= vv; i++)
	{
		cout << A[i] << ' ';
	}
	
	return 0;
}

