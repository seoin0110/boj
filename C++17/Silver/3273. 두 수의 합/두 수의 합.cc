#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll x;
	cin >> x;
	sort(v.begin(), v.end());
	ll left = 0;
	ll right = n-1;
	ll ans = 0;
	while (left < right) {
		if (v[left] + v[right] == x) {
			ans++;
			left++;
			right--;
		}
		else if (v[left] + v[right] < x) {
			left++;
		}
		else {
			right--;
		}
	}
	cout << ans;
	return 0;
}