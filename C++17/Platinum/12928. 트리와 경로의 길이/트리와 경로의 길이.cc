#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;
using ll = long long;
ll dp[51][111][1111],n,s; //dp[n][2n-2][s]
ll find(ll x,ll y,ll z) {
	if (dp[x][y][z] != -1) return dp[x][y][z];
	for (int i = 1; i < n; i++) {
		ll a = z - (i*(i - 1)) / 2;
		if (a < 0 || y < i)continue;
		if (find(x - 1, y - i, a))
			return dp[x][y][z] = 1;
	}
	return dp[x][y][z] = 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < 111; i++) {
		for (int j = 0; j < 1111; j++) {
			if (i*(i - 1) == j * 2)
				dp[1][i][j] = 1;
			else
				dp[1][i][j] = 0;
		}
	}
	cin >> n >> s;
	dp[1][0][0] = 0;
	cout << find(n, n * 2 - 2, s)<<"\n";
}
