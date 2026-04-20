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

ll inf = 1000000007;
ll dp[100001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 2;
    dp[5] = 1;
    dp[6] = 2;
    dp[7] = 1;
    ll n;
    cin >> n;
    for (ll i = 8; i <= n; i++) {
        dp[i] = min({ dp[i - 1], dp[i - 2], dp[i - 5], dp[i - 7] }) + 1;
    }
    cout << dp[n];
    return 0;
}