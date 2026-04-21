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
#define ll long long
using namespace std;

ll inf = 1000000007;
ll chk[101][101];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll x,y,m;
	cin >> x >> y >> m;
	ll ans = 0;
	for (ll i = 0; i <= m / x; i++) {
		ans = max(ans, i * x + ((m - i * x) / y) * y);
	}
	cout << ans;
	return 0;
}