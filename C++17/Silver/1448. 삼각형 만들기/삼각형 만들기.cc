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
using namespace std;
using ll = long long;


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	ll n;
	ll k;
	
	cin >> n;
	k = n;
	vector<ll>v;
	while (k--) {
		ll a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end(), greater<>());
	ll i = 2;
	ll ans = 0;
	while(i<n){
		if (v[i-2] < v[i-1] + v[i])
		{
			cout << v[i - 2] + v[i - 1] + v[i] << '\n';
			ans = 1;
			break;

		}
		i++;
	}
	if (ans == 0)
		cout << "-1\n";
	return 0;
}