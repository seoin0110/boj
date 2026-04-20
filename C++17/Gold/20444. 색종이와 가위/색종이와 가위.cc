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

	ll n, k;
	cin >> n >> k;

	ll l = 0;
	ll r = n / 2;
	string ans = "NO";
	while (l <= r) {
		ll mid = (l + r) / 2;
		ll tmp = (mid + 1) * (n - mid + 1);
		if (tmp == k) {
			ans = "YES";
			break;
		}
		if (tmp < k) {
			l = mid + 1;
			continue;
		}
		else {
			r = mid - 1;
			continue;
		}
	}
	cout << ans;

	return 0;
}