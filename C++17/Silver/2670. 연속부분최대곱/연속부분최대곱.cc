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
double dp[10000];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	cout.precision(3);
	cout << fixed;
	ll n;
	cin >> n;
	vector<double>v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	double m = 0;
	dp[0] = v[0];
	m = v[0];
	for (ll i = 1; i < n; i++) {
		if (dp[i - 1] >= 1) {
			dp[i] = dp[i - 1] * v[i];
		}
		else {
			dp[i] = v[i];
		}
		m = max(m, dp[i]);
	}
	cout << m;
	return 0;
}