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
ll dp_l[1000001]; //dp_l[i] : i번째 인덱스를 포함하면서 왼쪽으로 연속 최대 합
ll dp_r[1000001]; //dp_r[i] : i번째 인덱스를 포함하면서 오른쪽으로 연속 최대 합
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	dp_l[0] = v[0];
	for (ll i = 1; i < n; i++) {
		dp_l[i] = max(dp_l[i - 1] + v[i], v[i]);
	}

	dp_r[n - 1] = v[n - 1];
	for (ll i = n - 2; i >= 0; i--) {
		dp_r[i] = max(dp_r[i + 1] + v[i], v[i]);
	}
	ll ans = max(dp_l[n-1], dp_r[0]);
	for (ll i = 0; i < n-1; i++) {
		ans = max({ dp_l[i] + dp_r[i+1] , dp_l[i], dp_r[i], ans });
	}

	for (ll i = 1; i < n - 1; i++) {
		ans = max({ ans, dp_l[i - 1] + dp_r[i + 1] });
	}

	cout << ans;
	return 0;
}