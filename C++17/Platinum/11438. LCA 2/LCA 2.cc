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

ll f[100001][21];

ll m;
vector<ll>v[100001];

ll depth[100001];

void dfs(ll a, ll par) {
    depth[a] = depth[par] + 1;
    for (ll x : v[a]) {
        if (x == par) {
            continue;
        }
        f[x][0] = a;
        dfs(x, a);
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> m;
    
    for (ll i = 0; i < m - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    f[1][0] = 1;
    dfs(1, 0);
    for (ll i = 1; i < 21; i++) {
        for (ll j = 1; j <= m; j++) {
            f[j][i] = f[f[j][i - 1]][i - 1];
        }
    }

    

    ll n;

    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        if (depth[a] > depth[b])swap(a, b);
        
        for (ll i = 20; i >= 0; i--) {
            if (depth[b] - depth[a] >= ((ll)1 << i))
            {
                b = f[b][i];
            }

        }
        if (a == b) {
            cout << a << '\n';
            continue;
        }
        for (ll i = 20; i >= 0; i--) {
            if (f[a][i] != f[b][i]) {
                a = f[a][i];
                b = f[b][i];
            }
        }
        cout << f[a][0] << '\n';
    }



    return 0;
}