#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;
ll p[1001] = {0, };
ll check[1001] = { 0, };
ll func(ll a) {
	if (a == 1)
		return p[1];
	ll m = 0;
	if (check[a] == 0) {
		for (ll i = 1; i <= a / 2;i++) {
			m = max(m, func(a - i) + func(i));
		}
		check[a] = 1;
	}
	return p[a] = max(p[a],m);
}
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	ll n;
	cin >> n;
	check[1] = 1;
	for (ll j = 1; j <= n;j++)
		cin >> p[j];
	cout << func(n);
    return 0;
}