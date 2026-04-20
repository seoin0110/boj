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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    ll cnt = 1;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll ans = 1;
        vector<ll>dp(n,1);
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < i; j++) {
                if (v[i] > v[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                    ans = max(ans, dp[i]);
                }
            }
        }
        cout << "Case #" << cnt << ": " << n - ans<<'\n';
        cnt++;
    }
    return 0;
}