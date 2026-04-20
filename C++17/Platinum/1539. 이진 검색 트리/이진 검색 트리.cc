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
ll deep[250001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll n;
	cin >> n;
	set<ll>s;
	set<ll, greater<ll>>s_r;
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		auto low = s.upper_bound(a);
		auto low_r = s_r.upper_bound(a);
		if (low == s.end() && low_r == s_r.end()) {
			deep[a] = 1;
		}
		else if (low == s.end()) {
			deep[a] = deep[*low_r] + 1;
		}
		else if (low_r == s_r.end()) {
			deep[a] = deep[*low] + 1;
		}
		else {
			deep[a] = max(deep[*low_r], deep[*low]) + 1;
		}
		ans += deep[a];
		s.insert(a);
		s_r.insert(a);
	}
	cout << ans;
	return 0;
}