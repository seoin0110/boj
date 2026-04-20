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

ll dp[100000]; // dp[i] : i번째 노드를 루트로 하는 서브 트리에서의 정수 합 최댓값

vector<ll>v[100000];
ll ans;
ll arr[100000];

ll func(ll a) {
	if (dp[a] > 0) {
		return dp[a];
	}
	ll now = arr[a];
	for (auto x : v[a]) {
		ll tmp = func(x);
		if (tmp > 0) {
			now += tmp;
		}
	}

	return dp[a] = now;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	for (ll i = 0; i < n-1; i++) {
		ll a, b;
		cin >> a >> b;
		v[a].push_back(b);
	}
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << func(0);




	return 0;
}