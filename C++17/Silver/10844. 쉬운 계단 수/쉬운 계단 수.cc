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

ll dp[101][10];
ll inf = 1000000000;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    for (ll i = 1; i < 10; i++)
        dp[1][i] = 1;
    for (ll i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1];
        dp[i][9] = dp[i - 1][8];
        for (ll j = 1; j < 9; j++) {
            dp[i][j] = (dp[i - 1][j + 1] + dp[i - 1][j - 1]) % inf;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < 10; i++) {
        ans += dp[n][i];
    }
    cout << ans % inf;
    return 0;
}