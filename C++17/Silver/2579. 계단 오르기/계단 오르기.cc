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

ll arr[301][2];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	arr[0][0] = 0;
	arr[0][1] = v[0];
	if (n > 1) {
		arr[1][0] = arr[0][1];
		arr[1][1] = arr[0][1] + v[1];
	}
	if (n > 2) {
		arr[2][0] = arr[1][1];
		arr[2][1] = max(arr[1][0]+v[2], v[1]  + v[2]);
	}
	for (ll i = 3; i < n; i++) {
		arr[i][0] = arr[i - 1][1];
		arr[i][1] = max(arr[i - 1][0] + v[i], arr[i - 2][0] + v[i - 1] + v[i]);
	}
	cout <<arr[n - 1][1];
	return 0;
}