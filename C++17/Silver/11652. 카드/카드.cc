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
ll inf = 5e18 + 7;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	map<ll, ll>arr;
	ll ans = -inf;
	ll cnt = 0;
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		arr[a]++;
		if (arr[a] > cnt) {
			ans = a;
			cnt = arr[a];
		}
		else if (arr[a] == cnt && a < ans) {
			ans = a;
		}
	}

	cout << ans;
	return 0;
}