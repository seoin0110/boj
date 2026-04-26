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

ll kk[5000001];

void func(ll a) {
	if (kk[a] == a)
        cout << a << ' ';
	else {
		func(a / kk[a]);
		func(kk[a]);
	}

}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	ll n;

	cin >> n;
	for (ll i = 2; i <= 5000000; i++)
		kk[i] = i;
	for (ll i = 2; i <= 5000000; i++) {
		if (kk[i] != i)
			continue;
		for (ll j = 2 * i; j <= 5000000; j += i) {
			if (kk[j] != j)
				continue;
			kk[j] /= i;
		}
	}
	for (ll i = 0; i < n;i++) {
		ll a;
		cin >> a;
		func(a);
		cout << '\n';
	}

	
}
