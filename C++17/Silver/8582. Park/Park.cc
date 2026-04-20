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
ll dp[1000001];
ll dp2[1000001];
ll ans = 0;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> dp[i];
        dp2[i] = dp[i];
    }
    for(ll i = 1; i < n;i++){
        dp[i] = max(dp[i-1],dp[i]);
        dp2[n-i-1] = max(dp2[n-i-1],dp2[n-i]);
    }
    for(ll i = 0;i<n;i++){
        cout << dp[i] << ' ' << dp2[i]<<'\n';
    }
    return 0;
}