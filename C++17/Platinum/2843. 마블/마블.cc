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

ll par[300200];
ll A[300200];
ll v[300200];
bool checked[300200];
int find(int x) {
	if (!par[x])return x;
	return par[x] = find(par[x]);
}

void merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b)return;
	par[a] = b;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n,m;
	cin >> n;
	//vector<ll>v(n);
	for (ll i = 1; i <= n; i++) {
		cin >> v[i];
	}
	stack<pair<ll, ll> >q;
	cin >> m;
	for (ll i = 0; i < m; i++) {
		ll a, b;
		cin >> a >> b;
		if (a == 2) checked[b] = true;
		q.push({ a,b });
	}

	for (ll i = 1; i <= n; i++) {
		if (checked[i] || !v[i])continue;
		if (find(i) == find(v[i]))
			A[find(i)] = 1;
		else
			merge(i, v[i]);
	}
	stack<ll>ans;
	while (!q.empty()) {
		ll tmp1, tmp2;
		tmp1 = q.top().first;
		tmp2 = q.top().second;
		q.pop();
		if (tmp1 == 1) {
			if (A[find(tmp2)])
				ans.push(-1);
			else
				ans.push(find(tmp2));

		}
		else {
			if (find(tmp2) == find(v[tmp2]))A[find(tmp2)] = 1;
			else merge(tmp2, v[tmp2]);
		}
	}
	while (ans.size()) {
		if (ans.top() < 0) cout << "CIKLUS";
		else cout << ans.top();
		cout << '\n';
		ans.pop();
	}
	
	

	return 0;
}

