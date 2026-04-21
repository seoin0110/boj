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
#include <cassert>
using ll = long long;
using namespace std;
ll inf = 1000000007;

ll arr[32][32];
ll dp[32][32][3];
//0 : 아래로 1 : 오른쪽으로 2 : 대각선으로

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n,m;
    cin >> n ;
    
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    dp[0][0][0] = 0;
    dp[0][0][1] = 0;
    dp[0][0][2] = 0;
    for (ll i = 0; i < n; i++) {
        if (arr[0][i] == 0) {
            dp[0][i][1] = 1;
        }
        else {
            break;
        }
    }
    for (ll i = 1; i < n; i++) {
        for (ll j = 2; j < n; j++) {
            ll tmp = 0;
            if (arr[i][j] == 1)
                continue;
            if (arr[i][j - 1] == 0) {
                dp[i][j][1] = dp[i][j - 1][1] + dp[i][j - 1][2];
            }
            if (arr[i - 1][j] == 0) {
                dp[i][j][0] = dp[i - 1][j][0] + dp[i - 1][j][2];
            }
            if (arr[i - 1][j - 1] == 0 && arr[i][j-1] ==0 && arr[i-1][j] == 0) {
                
                dp[i][j][2] = dp[i - 1][j - 1][0] + dp[i - 1][j - 1][1] + dp[i - 1][j - 1][2];
            }
        }
    }
    cout << dp[n - 1][n - 1][0] + dp[n - 1][n - 1][1] + dp[n - 1][n - 1][2];
    return 0;
}