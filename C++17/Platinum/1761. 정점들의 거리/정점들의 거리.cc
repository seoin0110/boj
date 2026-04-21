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

ll f[40001][21];

ll m;
vector<pair<ll, ll > >v[40001];

ll depth[40001];
ll dist[40001];
void dfs(ll a, ll par, ll lo) {
    dist[a] = dist[par] -lo;
    depth[a] = depth[par] + 1;
    for (pair<ll, ll> x : v[a]) {
        if (x.first == par) {
            continue;
        }
        f[x.first][0] = a;
        dfs(x.first, a, x.second);
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> m;
    
    for (ll i = 0; i < m - 1; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({ b,c });
        v[b].push_back({ a,c });
    }
    f[1][0] = 1;
    dist[1] = 0;
    dfs(1, 0, 0);
    for (ll i = 1; i < 21; i++) {
        for (ll j = 1; j <= m; j++) {
            f[j][i] = f[f[j][i - 1]][i - 1];
        }
    }

    

    ll n;

    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll a, b, tmp1, tmp2;
        cin >> a >> b;
        tmp1 = a;
        tmp2 = b;
        if (depth[a] > depth[b])swap(a, b);
        
        for (ll i = 20; i >= 0; i--) {
            if (depth[b] - depth[a] >= ((ll)1 << i))
            {
                b = f[b][i];
            }

        }
        if (a == b) {
            cout << (dist[a] - dist[tmp1])+(dist[b] - dist[tmp2]) << '\n';
            continue;
        }
        for (ll i = 20; i >= 0; i--) {
            if (f[a][i] != f[b][i]) {
                a = f[a][i];
                b = f[b][i];
            }
        }
        cout << (dist[f[a][0]] - dist[tmp1]) + (dist[f[a][0]] - dist[tmp2]) << '\n';
    }



    return 0;
}