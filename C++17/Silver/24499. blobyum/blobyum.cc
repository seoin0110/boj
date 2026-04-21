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
using ll = long long;
using namespace std;
ll inf = -1000000007;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll k, n;
    cin >> k >> n;
    vector<ll>v(k);
    for (ll i = 0; i < k; i++)
        cin >> v[i];
    ll start = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        start += v[i];
    }
    ans = max(start, ans);
    for (ll i = 0; i < k; i++) {
        ans = max(ans, start- v[i] + v[(i + n)%k]);
        start = start - v[i] + v[(i + n) % k];

    }
    cout << ans;
    return 0;
}