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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll> >v(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        ans = max(ans, v[i].second);
    }
    sort(v.begin(), v.end());
    ll l = 0;
    ll r = 0;
    ll now = v[0].second;
    while (l < n) {
        if (v[r].first - v[l].first < d) {
            ans = max(ans, now);
            r++;
            if (r >= n) {
                r = n - 1;
                l++;
            }
            else {
                now += v[r].second;
            }
        }
        else {
            now -= v[l].second;
            l++;
        }
    }
    cout << ans;
    return 0;
}