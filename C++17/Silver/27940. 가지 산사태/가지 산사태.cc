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
	ll a, b, c;
	ll s = 0;
	cin >> a >> b >> c;
	for (ll i = 0; i < b; i++) {
		ll d, e;
		cin >> d >> e;
		s += e;
		if (s > c) {
			cout << i + 1 << ' ' << 1;
			return 0;
		}
	}
		cout << "-1";
		return 0;
	return 0;
}
