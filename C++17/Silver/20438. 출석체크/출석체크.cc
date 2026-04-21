#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

ll arr[5003];
ll sum[5003];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n, k, q, m;
	cin >> n >> k >> q >> m;
	for (ll i = 0; i < k; i++) {
		ll a;
		cin >> a;
		arr[a] = -1;
	}
	for (ll i = 0; i < q; i++) {
		ll a;
		cin >> a;
		if (arr[a] == -1)
			continue;
		ll tmp = a;
		while (tmp <= n+2) {
			if (arr[tmp] != -1)
				arr[tmp] = 1;
			tmp += a;
		}
	}
	for (ll i = 3; i <= n+2; i++) {
		if (arr[i] <= 0) {
			sum[i] = sum[i - 1] + 1;
		}
		else
			sum[i] = sum[i - 1];
	}

	for (ll i = 0; i < m; i++) {
		ll a, b;
		cin >> a >> b;
		cout << sum[b] - sum[a - 1] << '\n';
	}


	return 0;
}