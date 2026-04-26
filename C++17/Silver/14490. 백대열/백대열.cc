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

ll ans = 0;

void func(ll a, ll b) {
	if (b == 0) {
		ans = a;
		return;
	}
	else
		func(b, a%b);
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	ll n, m;
	char t;
	cin >> n >> t >> m;
	func(n, m);
	cout << n / ans << ':' << m / ans << '\n';
	
	
}
