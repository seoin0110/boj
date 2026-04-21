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

ll k[200001];
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll ans = 0;
	ll n;
	cin >> n;
	//for (ll i = 0; i < 200001; i++)k[i] = 1;
	for (ll i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		if (b == k[a]) {
			ans++;
			k[a] = b;
		}
		else {
			k[a] = b;
		}
	}
	for (ll i = 0; i < 200001; i++) {
		if (k[i] == 1)
			ans++;
	}
	cout << ans;
	return 0;
}