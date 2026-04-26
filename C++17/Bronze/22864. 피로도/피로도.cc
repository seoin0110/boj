#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

//ll arr[1000000];
//ll tree[4000000];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/*
	ll n;
	cin >> n;
	while (n--) {
		ll m,ans = 0;
		cin >> m;
		vector<pair<ll, ll> >v(m);
		vector<ll>tree(400000,0);
		ll base;
		for (base = 1; base < m; base *= 2);
		for (ll i = 0; i < m; i++) {
			cin >> v[i].first >> v[i].second;
			v[i].second = -v[i].second;
		}
		sort(v.begin(), v.end());  //x좌표는 오름차순, y좌표는 내림차순 정렬
		for (ll i = 0; i < m; i++) {
			for (ll j = 0; j < i; j++) {

			}
		}


		*/

	
	ll a, b, c, m;
	cin >> a >> b >> c >> m;
	if (a > m) {
		cout << 0;
		return 0;
	}
	if(m/a >=24) {
		cout << 24 * b;
		return 0;
	}
	ll time = 0;
	ll ans = m / a;
	time += ans;
	ans *= b;
	ll tired = 0;
	tired += (m / a) * a;
	while (time < 24) {
		if (m - tired < a) {
			time++;
			tired -= c;
			if (tired < 0)
				tired = 0;
			continue;
		}
		else {
			time++;
			tired += a;
			ans += b;
		}
	}
	cout << ans;
	return 0;
}

