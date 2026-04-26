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

ll n, a[110][110];

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	cin >> n;
	for (ll i = 0; i < n;i++)
		for (ll j = 0;j < n;j++)
			cin >> a[i][j];
	
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			for (ll k = 0; k < n; k++) {
				if (a[j][i]==1 && a[i][k]==1)
					a[j][k] = 1;
			}
		}
	}

	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}
