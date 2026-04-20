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
ll inf = 1e9 + 9;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll n, k;
	cin >> n >> k;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if (k % 2 == 0)k--;
	ll ans = 0;
	ans += v[n - 1];
	for (ll i = 0; i < (k - 1)/2; i++) {
		ans += v[n - 2 - i] - v[i];
	}
	cout << ans;
	return 0;
}