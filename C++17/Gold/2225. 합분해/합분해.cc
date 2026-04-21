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
ll dp[201][201];


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i <= n; i++)
        dp[1][i] = 1;
    for (ll i = 2; i <= k; i++) {
        for (ll j = 0; j <= n; j++) {
            for (ll l = 0; l <= j; l++) {
                dp[i][j] += dp[i - 1][l];
            }
            dp[i][j] %= 1000000000;
        }
        
    }
    cout << dp[k][n]% 1000000000;
    return 0;
}
