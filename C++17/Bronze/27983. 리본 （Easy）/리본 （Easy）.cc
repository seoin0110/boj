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
#include <set>
#include <cstring>
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll n;
	cin >> n;
	vector<ll>v(n);
	vector<ll>l(n);
	vector<char>c(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (ll i = 0; i < n; i++) {
		cin >> l[i];
	}
	for (ll i = 0; i < n; i++) {
		cin >> c[i];
	}
	ll flag = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = i + 1; j < n; j++) {
			if (abs(v[i] - v[j]) <= l[i] + l[j] && c[i] != c[j]) {
				flag = 1;
				cout << "YES\n" << i+1 << " " << j+1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 0) {
		cout << "NO";
	}

	return 0;
}