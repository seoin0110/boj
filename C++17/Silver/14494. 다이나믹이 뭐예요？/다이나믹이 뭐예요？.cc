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
using ll = long long;
using namespace std;
ll dp[1001][1001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        dp[i][0] = 1;
    }
    for (ll j = 0; j < m; j++)
        dp[0][j] = 1;
    for (ll i = 1; i < n; i++) {
        for (ll j = 1; j < m; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + dp[i-1][j-1]) % 1000000007;
        }
    }
    cout << dp[n - 1][m - 1];
    return 0;
}