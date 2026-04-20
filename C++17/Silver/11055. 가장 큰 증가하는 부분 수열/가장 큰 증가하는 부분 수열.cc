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
ll dp[1001];
ll sum[1001];
ll ans = 0;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> dp[i];
    }
    for (ll i = 0; i < n; i++) {
        sum[i] = dp[i];
        ans = max(ans, sum[i]);
        for (ll j = 0; j < i; j++) {
            if (dp[i] > dp[j]) {
                sum[i] = max(sum[i], sum[j] + dp[i]);
                ans = max(ans, sum[i]);
            }
        }
    }
    cout << ans;
    return 0;
}