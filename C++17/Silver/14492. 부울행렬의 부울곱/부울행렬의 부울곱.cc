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

ll n;
ll sum = 0;
ll a[300][300];
ll b[300][300];
ll c[300][300] = { 0, };

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	cin >> n;
	for (ll i = 0; i < n;i++) {
		for (ll j = 0;j < n;j++) {
			cin >> a[i][j];

		}
	}
	for (ll i = 0; i < n;i++) {
		for (ll j = 0;j < n;j++) {
			cin >> b[i][j];

		}
	}
	for (ll i = 0; i < n;i++) {
		for (ll j = 0;j < n;j++) {
			
			for (ll k = 0; k < n;k++) {
				if(a[i][k]==1 && b[k][j]==1)
					c[i][j] = 1;
			}
			
		}
		
	}
	for (ll i = 0; i < n;i++) {
		for (ll j = 0;j < n;j++) {
			if (c[i][j] == 1)
				sum++;

		}
	}

	cout << sum << '\n';
	return 0;
}
