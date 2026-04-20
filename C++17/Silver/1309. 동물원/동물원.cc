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
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 5e18 + 7;
ll dp[100001][3];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll n;
	cin >> n;
	dp[0][0] = 1;
	dp[0][1] = 1;
	dp[0][2] = 1;
	for (ll i = 1; i < n; i++) {
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % 9901;
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % 9901;
		dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % 9901;
	}
	cout << (dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2]) % 9901;
	return 0;
}