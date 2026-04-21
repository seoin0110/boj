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
using ll = long long;
using namespace std;



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll ans = 0;
	if (n % 2) {
		ans = v[n - 1];
		for (ll i = 0; i < n/2; i++) {
			ans = max(ans, v[i] + v[n-i-2]);
		}
	}
	else {
		for (ll i = 0; i < n/2; i ++) {
			ans = max(ans, v[i] + v[n - i - 1]);
		}
	}
	cout << ans;

	return 0;
}