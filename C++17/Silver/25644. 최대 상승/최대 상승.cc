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
ll dp[200001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>v(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];

        if (i > 0) {

            dp[i] = min(dp[i - 1], v[i]);
            ans = max(ans, v[i] - dp[i]);
        }
        else
            dp[0] = v[0];
    }
    cout << ans;

}