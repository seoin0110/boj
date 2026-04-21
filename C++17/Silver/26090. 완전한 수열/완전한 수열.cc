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
ll arr[1000001];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	vector<ll>v(n);
	vector<ll>cum(n + 1, 0);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		cum[i + 1] = cum[i] + v[i];
	}
	for (ll i = 2; i <= 1000000; i++) {
		if (arr[i] == 0) {
			for (int j = 2; j *i <= 1000000; j++) {
				arr[i*j] = 1;
			}
		}
	}
	ll ans = 0;
	arr[1] = 1;
	arr[0] = 1;
	for (ll i = n; i >=2; i--) {
		if (arr[i] != 0) {
			continue;
		}
		else {
			for (ll j = 0; j < n - i + 1; j++) {
				ll tmp = cum[i + j] - cum[j];
				if (tmp < 2)
					continue;
				if (arr[tmp] == 0) {
					ans++;
				}
			}
		}
	}

	cout << ans << '\n';

	return 0;
}