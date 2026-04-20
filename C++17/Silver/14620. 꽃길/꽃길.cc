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
ll ans = inf;
ll arr[10][10];
ll chk[10][10];
pair<ll,ll> loc[3];
ll n;
ll dx[5] = { 0, 1, -1,0, 0 };
ll dy[5] = { 0, 0, 0, 1, -1 };
void func(ll x, ll y, ll size) {
	if (size == 3) {
		ll tmp = 0;
		for (ll i = 0; i < 3; i++) {
			for (ll j = 0; j < 5; j++)
				tmp += arr[loc[i].first + dx[j]][loc[i].second + dy[j]];
			for (ll j = 0; j < 3; j++) {
				if (i == j)continue;
				if (abs(loc[i].first - loc[j].first) + abs(loc[i].second - loc[j].second) < 3) {
					return;
				}
			}
		}

		ans = min(ans, tmp);
		return;
	}
	for (ll xx = x; xx < n-1; xx++) {
		for (ll yy = 1; yy < n-1; yy++) {
			if (x == xx && yy >= y + 1 || x < xx) {
				loc[size++] = { xx, yy };
				func(xx, yy, size);
				size--;
			}
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for (ll i = 1; i < n-1; i++) {
		for (ll j = 1; j < n-1; j++) {
			loc[0] = { i, j };
			func(i, j, 1);
		}
	}

	cout << ans;


	return 0;
}