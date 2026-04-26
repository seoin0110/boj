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
#define ll long long
using namespace std;

ll inf = 1000000007;

ll arr[1001][1001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	ll r, c, q;
	cin >> r >> c >> q;
	for (ll i = 1; i <= r; i++) {
		for (ll j = 1; j <= c; j++) {
			cin >> arr[i][j];
			arr[i][j] = arr[i][j] + arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
		}
	}
	while (q--) {
		ll a1, a2, b1, b2;
		cin >> a1 >> a2 >> b1 >> b2;
		cout << (arr[b1][b2] - arr[a1-1][b2] - arr[b1][a2-1] + arr[a1-1][a2-1]) / ((b1-a1+1)*(b2-a2+1))<<'\n';
	}

	return 0;
}