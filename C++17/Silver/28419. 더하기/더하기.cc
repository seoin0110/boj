#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <queue>
#include <set>
#include <cstring>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	ll a = 0;
	ll b = 0;
	for (ll i = 0; i < n; i++) {
		ll tmp;
		cin >> tmp;
		if (i % 2 == 0) {
			a += tmp;
		}
		else
			b += tmp;
	}
	if (n == 3 && a >= b + 1) {
		cout << "-1";
	}
	else {
		cout << abs(a - b);
	}
	return 0;
}