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
	vector<ll>v[4];
	vector<ll>st1;
	vector<ll>st2;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < 4; j++) {
			ll a;
			cin >> a;
			v[j].push_back(a);
		}
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			st1.push_back(v[0][i] + v[1][j]);
			st2.push_back(v[2][i] + v[3][j]);
		}
	}
	sort(st1.begin(), st1.end());
	sort(st2.begin(), st2.end(), greater<>());
	ll ans = 0;
	for (auto target : st2) {
		ll idx1 = upper_bound(st1.begin(), st1.end(), -1 * target) - st1.begin();
		ll idx2 = lower_bound(st1.begin(), st1.end(), -1 * target) - st1.begin();
		ans += (idx1 - idx2);
	}
	cout << ans;
	return 0;
}