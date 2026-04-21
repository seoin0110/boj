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
#include <map>
#include <set>
#include <cstring>
#include <cassert>
using ll = long long;
using namespace std;
ll inf = 1000000007;
ll n, m;
int ans[100];
int used[100];
vector<ll>v(8);
void n_m(int b, int c) {
	if (m == b) {
		for (int i = 0; i < m; i++)cout << ans[i] << ' ';
		cout << '\n';
		return;
	}
	for (ll i = 0; i < n; i++) {
		if (v[i] > c) {
			ans[b] = v[i];
			n_m(b + 1, v[i]);
			ans[b] = 0;
		}
	}
	return;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	v.resize(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	n_m(0, 0);
	return 0;
}