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
ll dp[51];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for (ll i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]+1 )% 1000000007;
    }
    cout << dp[n]%1000000007;
    return 0;
}