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
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	ll n;
	ll max = 1;
	ll min = 100000;
	cin >> n;
	vector<ll>a(n);
	vector<ll>b(n);
	for (ll i = 0; i < n;i++) {
		cin >> a[i] >> b[i];
	}
	for (ll i = 0;i < n;i++) {

		if (b[i] < min)
			min = b[i];
		if (a[i] > max)
			max = a[i];

	}

	if (min >= max)
		cout << "0\n";
	else
		cout << max - min << '\n';

	return 0;
}
