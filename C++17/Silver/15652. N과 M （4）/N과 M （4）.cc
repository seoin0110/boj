#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n, m;
int ans[100];
void n_m(int a, int b) {
	if (m == b) {
		for (int i =0; i < m; i++)cout << ans[i] << ' ';
		cout << '\n';
		return;
	}
	for (ll i = a; i <= n; i++) {
		ans[b] = i;
		n_m(i, b + 1);
		ans[b] = 0;
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	n_m(1,0);
	return 0;
}