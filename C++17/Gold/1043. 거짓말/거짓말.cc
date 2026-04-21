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
#define ll long long
using namespace std;

ll inf = 1000000007;

ll par[51];

ll find(ll a) {
    if (par[a] < 0)
        return a;
    return par[a] = find(par[a]);
}

bool merge(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    if (x == y)
        return false;
    if (par[x] == -2 || par[y] == -2) {
        par[x] = y;
        par[y] = -2;
    }
    else {
        par[x] = y;
        par[y] = -1;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    
    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
        par[i] = -1;
    ll p = 0;
    cin >> p;
    for (ll i = 0; i < p; i++) {
        ll tmp;
        cin >> tmp;
        par[tmp] = -2;
    }
    vector<ll>v[50];
    for (ll i = 0; i < m; i++) {
        ll tmp;
        cin >> tmp;
        ll last = 0;
        cin >> last;
        v[i].push_back(last);
        for (ll j = 1; j < tmp; j++) {
            ll tmp2;
            cin >> tmp2;
            v[i].push_back(tmp2);
            merge(last, tmp2);
        }
    }
    ll ans = 0;
    for (ll i = 0; i < m; i++) {
        ll lie_flag = 0;
        for (auto j : v[i]) {
            if (par[find(j)] == -2) {
                lie_flag = 1;
                break;
            }

        }
        if (lie_flag == 0)
            ans++;
    }
    cout << ans;
    return 0;
}