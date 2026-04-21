//12847
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

ll n, q;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n, m;
    cin >> n >> m;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll ans = 0;
    ll tmp = 0;
    for (ll i = 0; i < m; i++) {
        tmp += v[i];
    }
    ans = tmp;
    for (ll i = 0; i < n-m; i++) {
        tmp -= v[i];
        tmp += v[m + i];
        ans = max(ans, tmp);
    }
    cout << ans;
    return 0;
}