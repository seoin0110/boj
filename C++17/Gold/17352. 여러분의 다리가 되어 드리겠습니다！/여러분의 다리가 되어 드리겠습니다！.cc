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
#define inf 1000000007

ll par[300001];

ll find(ll a) {
    if (par[a] < 0)
        return a;
    return par[a] = find(par[a]);
}

bool uni(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    if (x == y)
        return false;
    par[x] = y;
    return true;
}

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    for (ll i = 1;i <= n;i++)
        par[i] = -1;

    for (ll i = 0; i < n-2;i++) {
        ll a, b;
        cin >> a >> b;
        uni(a, b);
    }
    ll ans1;
    ll ans2;
    for (ll i = 1; i < n;i++) {
        if (uni(i, i + 1) == true) {
            ans1 = i;
            ans2 = i + 1;
            break;
        }

    }
    if (n == 2) {
        cout << "1 2 " << '\n';
        return 0;
    }
    cout << ans1 << ' ' << ans2 << '\n';

    return 0;
}

