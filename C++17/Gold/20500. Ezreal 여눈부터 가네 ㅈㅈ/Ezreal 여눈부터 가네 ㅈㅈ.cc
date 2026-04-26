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
int n;

vector<ll>dp(1516,0);

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	cin >> n;
	if (n <= 3)
	{
		cout << dp[n] << '\n';
		return 0;
	}
	ll count = 4;
	while (count <= n)
	{
		ll temp = 0;
		for (ll i = 2;i <= count - 2;i++)
		{
			temp += 2 * dp[i];
			temp = temp % 1000000007;
		}
		dp[count] = temp + 1;
		count++;
	}

	cout << dp[n] << '\n';
	return 0;

}
