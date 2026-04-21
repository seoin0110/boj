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
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n, m;
	cin >> n >> m;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	ll ans = 0;
	ll left = 0;
	ll right = n - 1;
	while (left < right) {
		if (v[left] + v[right] >= m) {
			left++;
			right--;
			ans++;
		}
		else {
			left++;
		}
	}

	cout << ans;
	return 0;
}