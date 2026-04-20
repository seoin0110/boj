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
ll inf = 1e9 + 7;

ll dp[10001][3];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    dp[1][0] = 1;
    dp[1][1] = 0;
    dp[1][2] = 0;
    dp[2][0] = 1;
    dp[2][1] = 1;
    dp[2][2] = 0;
    dp[3][0] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    for (ll i = 4; i <= 10000; i++) {
        dp[i][0] = 1;
        dp[i][1] = dp[i - 2][0] + dp[i - 2][1];
        dp[i][2] = dp[i - 3][0] + dp[i - 3][1] + dp[i - 3][2];
    }
    ll t;
    cin >> t;
    while (t--) {
        ll a;
        cin >> a;
        cout << dp[a][0] + dp[a][1] + dp[a][2] << '\n';
    }
    return 0;
}