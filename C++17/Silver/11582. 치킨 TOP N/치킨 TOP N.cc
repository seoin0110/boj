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
	
	ll n, k;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n;i++) {
		cin >> v[i];
	}
	cin >> k;
	k = n / k;
	ll start = 0;
	ll end = k;
	while (end <= n) {
		sort(v.begin()+start, v.begin()+end);
		start = end;
		end += k;
	}
	for (ll i = 0; i < n;i++) {
		cout << v[i]<< ' ';
	}
	return 0;
}