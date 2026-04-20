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
ll inf = 1e9 + 9;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	string s;
	cin >> s;
	ll ans = 0;
	ll tmp = 0;
	if (s[0] == 'c') {
		ans = 26;
	}
	else {
		ans = 10;
	}
	char now = s[0];
	for (ll i = 1; i < s.length(); i++) {
		if (s[i] == now) {
			ans *= (s[i] == 'c'? 25: 9);
			ans %= inf;
			continue;
		}
		ans *= (s[i] == 'c' ? 26 : 10);
		ans %= inf;
		now = s[i];
	}
	cout << ans%inf;
	return 0;
}