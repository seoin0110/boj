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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll>a(n);
        vector<ll>b(m);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        ll ans = 0;
        ll idx1 = 0;
        ll idx2 = 0;
        while (idx1 < n && idx2 < m) {
            if (a[idx1] > b[idx2]) {
                idx1++;
                ans += m - idx2;
            }
            else {
                idx2++;
            }
        }
        cout << ans << '\n';

    }
    return 0;
}