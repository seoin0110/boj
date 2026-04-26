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

const ll inf = 999999999;
ll nn[12];

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < 12;i++) {
		nn[i] = 0;
	}
	nn[1] = 1;
	nn[2] = 2;
	nn[3] = 4;
	for(ll i = 4; i < 12;i++) {
		nn[i] = nn[i - 2] + nn[i - 1] + nn[i - 3];
	}
	for (ll i = 0; i < n;i++) {
		cin >> v[i];
		cout << nn[v[i]] << '\n';
	}




	return 0;
}
