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
	ll n, m;
	cin >> n >> m;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	ll r = 0;
	ll l = 0;
	ll sum = v[r];
	ll max_ = 0;
	if (sum <= m)
		max_ = sum;
	while (r < n) {
		if (sum <= m) {
			max_ = max(max_, sum);
			r++;
			if (r < n)
				sum += v[r];
		}
		else {
			sum -= v[l];
			l++;
			if (sum <= m) {
				max_ = max(max_, sum);
			}
		}
	}
	if (sum <= m) {
		max_ = max(max_, sum);
	}
	cout << max_;
	return 0;
}