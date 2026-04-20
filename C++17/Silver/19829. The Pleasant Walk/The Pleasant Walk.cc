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


ll cnt = 0;
ll n, k;
ll ans = 1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll l = 0;
    ll r = 0;
    while (l <= r && r < n-1) {
        if (v[r] != v[r+1]) {
            r++;
            ans = max(ans, r - l + 1);
        }
        else {
            l = r + 1;
            r = r + 1;
        }
    }
    cout << ans;
    return 0;
}
