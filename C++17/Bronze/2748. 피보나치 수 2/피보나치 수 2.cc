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

vector<ll>dp(100, -1);

ll func(ll a) {
	if (dp[a] != -1)
		return dp[a];
	else
		return dp[a] = func(a - 1) + func(a - 2);
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll a;
	cin >> a;
	dp[0] = 0;
	dp[1] = 1;
	cout << func(a) << '\n';

}
