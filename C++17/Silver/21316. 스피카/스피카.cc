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
using namespace std;
using ll = long long;

const ll inf = 999999999;
vector<ll>s[13];
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	for (ll i = 0; i < 12; i++) {
		ll a, b;
		cin >> a >> b;
		s[a].push_back(b);
		s[b].push_back(a);
	}
	for (ll i = 1; i <= 12; i++) {
		ll c1 = 0;
		ll c2 = 0;
		ll c3 = 0;
		if (s[i].size() == 3) {
			for (ll j = 0; j < 3; j++) {
				if (s[s[i][j]].size() == 1)
					c1 = 1;
				else if (s[s[i][j]].size() == 2)
					c2 = 1;
				else if (s[s[i][j]].size() == 3)
					c3 = 1;
			}
			if (c1&&c2&&c3) {
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}
