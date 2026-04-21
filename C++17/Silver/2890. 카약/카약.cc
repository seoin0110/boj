#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;
ll chk[9];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll a, b;
	cin >> a >> b;
	vector<string>v(a);
	vector<pair<ll,ll > >vv(9);
	for (ll i = 0; i < a; i++) {
		cin >> v[i];
	}
	for (ll i = 0; i < a; i++) {
		for (ll j = b - 2; j > 0; j--) {
			if (v[i][j] != '.') {
				vv[v[i][j] - '1'] = { b - j,v[i][j] - '1' };
			}
		}
	}
	sort(vv.begin(), vv.end());
	chk[vv[0].second] = 1;
	ll score = 1;
	for (ll i = 1; i < 9; i++) {
		if (vv[i - 1].first == vv[i].first) {
			chk[vv[i].second] = score;
		}
		else {
			score++;
			chk[vv[i].second] = score;
		}
	}
	for (ll i = 0; i < 9; i++) {
		cout << chk[i] << '\n';
	}
	return 0;
}
// && n-v[i] <=i+1
