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

ll a[21][21];
ll b[21];
ll n;
ll mm = 10000000;
void comb(int m, int k) {
	if (k == n)	return;
	if (m == n / 2) {
		ll c = 0;
		ll d = 0;
		for (ll i = 0; i < n;i++) {
			for (ll j = i + 1; j < n;j++) {
				if (b[i] && b[j]) {
					c += a[i][j] + a[j][i];
				}
				else if (!b[i] && !b[j]) {
					d += a[i][j] + a[j][i];
				}
			}
		}
		mm = min(mm, abs(c - d));
	}
	b[k] = 1;
	comb(m+1, k+1);
	b[k] = 0;
	comb(m, k + 1);
}


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (ll i = 0; i < n;i++) {
		for (ll j = 0; j < n;j++) {
			cin >> a[i][j];
		}
	}
	comb(0, 0);
	cout << mm<<'\n';
	
	return 0;
}