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
#define inf 100000009
ll a[1001][10001];

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    ll n, k;

    cin >> n >> k;
    vector<pair<ll, ll> >v(k + 1);
    for (ll i = 0; i < k;i++) {
        cin >> v[i].first >> v[i].second;
    }
    for (ll i = 0; i < 1001;i++) {
        for (ll j = 0; j < 10001;j++)
            a[i][j] = -inf;
    }
    a[0][0] = 0;
    a[0][v[0].second] = v[0].first;

    for (ll i = 1; i < k;i++) {
        for (ll j = 0; j <= 10000;j++) {
            if (j - v[i].second >= 0)
                a[i][j] = max(a[i - 1][j], a[i - 1][j - v[i].second] + v[i].first);
            else
                a[i][j] = a[i - 1][j];

        }
    }
    ll ans = 0;
    for (ll i = 0; i < k;i++) {
        for (ll j = 0; j <= n;j++) {
            ans = max(a[i][j], ans);
        }
    }

    cout << ans << '\n';

    return 0;
}
