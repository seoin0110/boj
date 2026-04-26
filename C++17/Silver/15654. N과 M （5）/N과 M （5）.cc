#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, m;
int ans[100];
int used[100];
vector<ll>v(100);
void n_m(int b) {
	if (m == b) {
		for (int i =0; i < m; i++)cout << ans[i] << ' ';
		cout << '\n';
		return;
	}
	for (ll i = 0; i < n; i++) {
		if (used[i] == 1)
			continue;
		ans[b] = v[i];
		used[i] = 1;
		n_m(b + 1);
		used[i] = 0;
		ans[b] = 0;
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.begin()+n);
	//for (ll i = 0; i < n; i++)
		//cout << v[i] << ' ';
	n_m(0);
	return 0;
}