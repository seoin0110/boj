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
    ll aa = 1;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        vector<ll>v(a);
        for (ll i = 0; i < a; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        ll tmp = 0;
        ll time = 1;
        for (ll i = 0; i < a; i++) {
            if (tmp >= b) {
                tmp = 0;
                time++;

            }
            if (time <= v[i]) {
                tmp++;
                ans++;
            }
        }
        cout << "Case #" << aa << ": " << ans <<'\n';
        aa++;
    }
    return 0;
}
