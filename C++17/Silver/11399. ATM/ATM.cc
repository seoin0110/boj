#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	ll sum = 0;
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n;i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (ll i = 0; i < n;i++) {
		for (ll j = 0; j <= i;j++) {
			sum += v[j];
		}
	}
	cout << sum << '\n';
	
	return 0;
}