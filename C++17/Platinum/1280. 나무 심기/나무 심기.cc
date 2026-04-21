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
ll tree[800000];
ll cnt[800000];
ll base;

pair<ll, ll> find(ll a, ll b) {
	ll sum = 0;
	ll sum_c = 0;
	while (a <= b) {
		if (a % 2)
		{
			sum = (sum + tree[a])%inf;
			sum_c = (sum_c + cnt[a])%inf;
			a++;
		}
		if (b % 2 == 0)
		{
			sum = (sum + tree[b])%inf;
			sum_c = (sum_c + cnt[b])%inf;
			b--;
		}
		a /= 2;
		b /= 2;
	}
	return { sum%inf,sum_c%inf };
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	ll n;
	ll ans = 1;
	cin >> n;
	vector<ll>v(n);
	for (base = 1; base < 200000; base *= 2);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		tree[base + v[i]] += v[i];
		cnt[base + v[i]]++;
		ll tmp = base + v[i];
		tmp /= 2;
		while (tmp) {
			tree[tmp] = tree[tmp * 2] + tree[tmp * 2 + 1];
			cnt[tmp] = cnt[tmp * 2] + cnt[tmp * 2 + 1];
			tmp /= 2;
		}
		if (i > 0) {
			pair<ll, ll> x = find(base, base + v[i] - 1);
			pair<ll, ll> y = find(base + v[i] + 1, base + 200000);
			ans = (ans * (((x.second * v[i])%inf - x.first+inf)%inf + (y.first - (y.second * v[i])%inf+inf)%inf)%inf)%inf;
		}
	}

	cout << ans%inf;

	return 0;
}