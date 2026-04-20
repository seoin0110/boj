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
ll dp[100001][5];
ll ma[5];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    vector<pair<ll,ll> >v(n+1, {0,0});
    ll ans = 0;
    ll idx = -1;
    for (ll i = 1; i <= n; i++) {
        cin >> v[i].first >> v[i].second;
        dp[i][v[i].first - 1] = dp[i - 1][v[i].first - 1] + 1;
        if (dp[i][v[i].first - 1] > ans) {
            idx = v[i].first - 1;
            ans = dp[i][v[i].first - 1];
        }
        else if (dp[i][v[i].first - 1] == ans && idx > v[i].first - 1)
            idx = v[i].first - 1;
        if (v[i].first != v[i].second) {
            dp[i][v[i].second - 1] = dp[i - 1][v[i].second - 1] + 1;
            if (dp[i][v[i].second - 1] > ans) {
                idx = v[i].second - 1;
                ans = dp[i][v[i].second - 1];
            }
            else if (dp[i][v[i].second - 1] == ans && idx > v[i].second - 1)
                idx = v[i].second - 1;
        }
    }
    cout << ans << ' ' << idx+1;
    return 0;
}
