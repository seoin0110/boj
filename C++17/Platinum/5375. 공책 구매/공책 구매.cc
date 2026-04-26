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

ll dp[10001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll t,n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)dp[i] = 1000000000000000001;
        dp[0] = 0;
        ll ans = 1000000000000000001;
        vector<pair<ll, pair<ll, ll> > >v(m);
        for (ll i = 0; i < m; i++) {
            cin >> v[i].second.first >> v[i].first >> v[i].second.second;
        }
        sort(v.begin(), v.end());
        for (ll i = 0; i < m; i++) {
            ll a = v[i].second.first, b = v[i].first, c = v[i].second.second;
            for (ll j = n; j >= 0; j--) {
                if (j + a >= n) {
                    ans = min(ans, dp[j] + (n - j) * b + c);
                }
                if (j >= a) {
                    dp[j] = min(dp[j], dp[j - a] + a * b + c);
                }
            }
        }
        cout << ans << '\n';

    }

    return 0;
}