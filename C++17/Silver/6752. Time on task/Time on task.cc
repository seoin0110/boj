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
    ll n;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        sum += v[i];
        if (sum <= t) {
            ans = i + 1;
        }
        else
            break;
    }
    cout << ans;
    return 0;
}
