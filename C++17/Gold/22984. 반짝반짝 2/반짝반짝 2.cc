#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define pll pair<ll, ll>
#define pii pair<int, int>
using namespace std;
int n;
long double arr[1000'010][2];
long double ans = 0;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
#endif
	cin >> n;
	arr[0][0] = 1;
	arr[0][1] = 1;

	for (int i = 1; i <= n; i++) {
		long double x;
		cin >> x;
		arr[i][0] = x;
		arr[i][1] = 1 - x;
		ans += x;
		if (i == 1)continue;
		ans += arr[i - 1][0] * (1 - x);
		ans += arr[i - 1][1] * (x);
	}
	cout << fixed;
	cout.precision(13);
	cout << ans;
}

