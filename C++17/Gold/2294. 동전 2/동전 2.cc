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

ll dp[10000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    for (ll i = 1; i <= k; i++) {
        dp[i] = inf;
    }
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (ll i = 1; i <= k; i++) {
        for (ll j = 0; j < n; j++) {
            if (i - v[j] < 0)
                continue;
            dp[i] = min(dp[i], dp[i - v[j]] + 1);
        }
    }
    if (dp[k] == inf)
        cout << "-1";
    else
        cout << dp[k];
    return 0;
}