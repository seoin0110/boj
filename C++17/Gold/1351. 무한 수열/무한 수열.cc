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
map<ll, ll> m;
ll n, p, q;

ll func(ll now) {
	if (m.find(now) != m.end()) return m[now];
	return m[now] = func(now / p) + func(now / q);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n >> p >> q;
	m[0] = 1;
	cout << func(n);


	return 0;
}