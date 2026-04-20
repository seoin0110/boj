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
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll ans = 0;
	ll m = 0;
	for (ll i = n - 1; i >= 0; i--) {
		if (v[i] > m) {
			ans++;
			m = v[i];
		}
	}
	cout << ans;
	return 0;
}