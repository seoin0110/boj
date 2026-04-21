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
#define ll int
using namespace std;


ll cost[17][17];
ll dp[(1 << 17)][17];

ll ans = 1000000009;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }
    for (ll ii = 0; ii < n; ii++) {
        for (ll i = 1; i < (1<<n); i++) {
            for (ll j = 0; j < n; j++)
                dp[i][j] = 1000000009;
        }
        dp[(1 << ii)][ii] = 0;
        for (ll i = 0; i < (1 << n); i++) {
            for (ll j = 0; j < n; j++) {
                if (!(i & (1 << j)))
                    continue;
                for (ll k = 0; k < n; k++) {
                    if (!cost[j][k] || (i & (1 << k)))
                        continue;
                    ll x = i | (1 << k);
                    dp[x][k] = min(dp[x][k], dp[i][j] + cost[j][k]);
                }
            }
        }


        for (ll i = 0; i < n; i++)
        {
            if (cost[i][ii])ans = min(ans, dp[(1 << n) - 1][i] + cost[i][ii]);
        }
    }

    cout << ans;


    return 0;
}