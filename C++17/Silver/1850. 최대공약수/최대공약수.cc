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

ll func(ll a, ll b) {
	if (a%b == 0)return b;
	return func(b, a%b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll a, b;
	cin >> a >> b;
	ll ans = func(a, b);
	for (ll i = 0; i < ans; i++) {
		cout << 1;
	}
	return 0;
}