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

ll dp[3][1000000];
ll modu[1000000];
ll inf = 1000000007;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    string s;
    cin >> n;
    cin >> s;
    modu[0] = 1;
    for (ll i = 1; i <= n; i++) {
        modu[i] = (modu[i - 1] * 2) % inf;
    }
    if (s[n - 1] == 'K') {
        dp[0][n - 1] = 1;
    }
    for (ll i = n - 2; i >= 0; i--) {
        if (s[i] == 'K') {
            dp[0][i] = (dp[0][i + 1] + 1) % inf;
        }
        else
            dp[0][i] = dp[0][i + 1];
        if (s[i] == 'C') {
            dp[1][i] = (dp[0][i + 1] + dp[1][i + 1]) % inf;
        }
        else
            dp[1][i] = dp[1][i + 1];
        if (s[i] == 'O') {
            dp[2][i] = (dp[1][i + 1] + dp[2][i + 1]) % inf;
        }
        else
            dp[2][i] = dp[2][i + 1];
    }
    ll ans = 0;

    for (ll i = n - 1; i >= 0; i--) {
        if (s[i] == 'R') {
            ans = (ans + dp[2][i] * modu[i]) % inf;
        }
    }
    cout << ans;

    return 0;
}
