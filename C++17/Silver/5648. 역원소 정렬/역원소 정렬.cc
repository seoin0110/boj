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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<string>v(n);
	vector<ll>v2(n,0);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		for (ll j = v[i].length() - 1; j >= 0; j--) {
			v2[i] += (ll)(v[i][j] - '0');
			if(j != 0)
				v2[i] *= 10;
		}
	}
	sort(v2.begin(), v2.end());
	for (ll i = 0; i < n; i++) {
		cout << v2[i] << '\n';
	}
	return 0;
}