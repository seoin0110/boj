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
    ll n, m;
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        vector<ll>v1(n);
        vector<ll>v2(m);
        for (ll i = 0; i < n; i++) {
            cin >> v1[i];
        }
        for (ll i = 0; i < m; i++) {
            cin >> v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        ll p1 = 0;
        ll p2 = 0;
        ll ans = 0;
        while (p1 < n && p2 < m) {
            if (v1[p1] == v2[p2]) {
                ans++;
                p1++;
                p2++;
            }
            else if (v1[p1] < v2[p2]) {
                p1++;
            }
            else
                p2++;
        }
        cout << ans<<'\n';

    }
    return 0;
}
