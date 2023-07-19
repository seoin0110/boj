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

ll dp[201][401][401];
ll ob[401][401];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll x1, y1;
    cin >> x1 >> y1;
    ll t;
    cin >> t;
    ll home_x, home_y;
    cin >> home_x >> home_y;
    ll n;
    cin >> n;
    ll inf = 1000000007;
    dp[0][200][200] = 1;
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        if (x > x1 + 200 || x < x1 - 200) {
            continue;
        }
        else if (y > y1 + 200 || y < y1 - 200) {
            continue;
        }
        ob[x - x1 + 200][y - y1 + 200] = -1;
    }
    if (home_x > x1 + 200 || home_x < x1 - 200) {
        cout << 0;
        return 0;
    }
    else if (home_y > y1 + 200 || home_y < y1 - 200) {
        cout << 0;
        return 0;
    }
    ll ans = 0;
    for (ll i = 1; i <= t; i++) {
        for (ll j = 0; j <= 400; j++) {
            for (ll k = 0; k <= 400; k++) {
                if (ob[j][k] == -1)
                    continue;
                if (j + 1 <= 400 && ob[j + 1][k] != -1 && dp[i - 1][j + 1][k] > 0)
                    dp[i][j][k] += dp[i - 1][j + 1][k];
                if (j - 1 >= 0 && ob[j - 1][k] != -1 && dp[i - 1][j - 1][k] > 0)
                    dp[i][j][k] += dp[i - 1][j - 1][k];
                if (k + 1 <= 400 && ob[j][k + 1] != -1 && dp[i - 1][j][k + 1] > 0)
                    dp[i][j][k] += dp[i - 1][j][k + 1];
                if (k - 1 >= 0 && ob[j][k - 1] != -1 && dp[i - 1][j][k - 1] > 0)
                    dp[i][j][k] += dp[i - 1][j][k - 1];
                dp[i][j][k] = dp[i][j][k] % inf;
                if (j == home_x - x1 + 200 && k == home_y - y1 + 200) {
                    ans += dp[i][j][k];
                    dp[i][j][k] = 0;
                }
            }
        }
    }

    
    for (ll i = 0; i <= t; i++) {
        ans += dp[i][home_x - x1 + 200][home_y - y1 + 200];
    }
    cout << ans % inf;
   

    return 0;
}
