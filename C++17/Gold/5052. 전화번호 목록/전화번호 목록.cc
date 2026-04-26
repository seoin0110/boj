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

ll inf = 1000000007;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll flag = 0;
        vector<string>v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (ll i = 0; i < n - 1; i++) {
            ll lth = min(v[i].length(), v[i + 1].length());
            if (v[i].substr(0, lth) == v[i + 1].substr(0, lth)) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }

    return 0;
}
