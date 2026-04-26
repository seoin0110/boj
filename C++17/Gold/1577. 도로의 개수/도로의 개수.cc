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
#define inf 1000000007
ll dp[101][101];
ll road1[101][101];
ll road2[101][101];
int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll n, m;
    ll k;
    cin >> m >> n;
    cin >> k;
    for (ll i = 0; i <= n;i++) {
        for (ll j = 0; j <= m;j++) {
            road1[i][j] = 0;
            road2[i][j] = 0;
        }

    }
    for (ll i = 0; i < k;i++) {
        ll a, b, c, d;
        cin >> b >> a >> d >>c;
        if (a == c)
            road1[a][min(b, d)] = 1; //가로 줄
        if (b == d)
            road2[min(a, c)][b] = 1; //세로 줄
    }
    for (ll i = 0; i <= n;i++) {
        for (ll j = 0; j <= m;j++) {
                dp[i][j] = 0;
        }
    }
    dp[0][0] = 1;
    for (ll i = 0; i <= n;i++) {
        for (ll j = 0; j <= m;j++) {
            if(j > 0 && road1[i][j-1] == 0)
                dp[i][j] += dp[i][j - 1];
            if (i > 0 && road2[i - 1][j] == 0 )
                dp[i][j] += dp[i-1][j];
        }
    }
    
    cout << dp[n][m] << '\n';

    return 0;
}

