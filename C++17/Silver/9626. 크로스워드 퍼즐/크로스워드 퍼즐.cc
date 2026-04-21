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


int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	ll m, n, l, r, u, d;
	cin >> m >> n >> u >> l >> r >> d;
	vector<string>v(m);
	for (ll i = 0; i < m; i++)
		cin >> v[i];
	for (ll i = 0; i < u+d+m; i++) {
		for (ll j = 0; j < l+r+n; j++) {
			if (i >= u && i < u + m && j >= l && j < l + n) {
				cout << v[i - u][j - l];
			}
			else if ((i + j) % 2) {
				cout << '.';
			}
			else {
				cout << "#";
			}
		}
		cout << '\n';
	}

	return 0;
}