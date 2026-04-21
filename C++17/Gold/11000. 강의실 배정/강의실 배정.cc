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
ll n, s, e, ans, ret=0;
vector<ll> arr;
bool cmp(ll a, ll b) {
	if (a * a == b * b)
		return a < b;
	return a * a < b* b;
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> e;
		arr.emplace_back(s);
		arr.emplace_back(-e);
	}
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < n * 2; i++) {
		if (arr[i] >= 0) ret++;
		else ret--;
		ans = max(ans, ret);
	}
	cout << ans << '\n';
	return 0;
}