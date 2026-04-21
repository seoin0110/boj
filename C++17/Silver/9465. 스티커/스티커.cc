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

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;

	cin >> n;

	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		vector<ll>v(a * 2);
		for (ll j = 0; j < a * 2; j++) {
			cin >> v[j];
		}
		ll max2 = 0;
		vector<ll>m(a * 2);
		m[0] = v[0];
		m[a] = v[a];
		if (a == 1)
		{
			cout << max(v[0], v[1]) << '\n';
			continue;
		}
		m[1] = v[1] + v[a];
		m[a + 1] = v[0] + v[a + 1];
		max2 = max( m[1],m[a + 1] );
		for (ll j = 2; j < a; j++) {
			m[j] = max(m[j - 2 + a] + v[j],m[j - 1 + a] + v[j] );
			m[a + j] = max( m[j - 2] + v[a + j], m[j - 1] + v[a + j] );
			ll tmp = max(m[j], m[a + j]);
			max2 = max( max2,tmp );
		}

		cout << max2 << '\n';
	}

	return 0;
}