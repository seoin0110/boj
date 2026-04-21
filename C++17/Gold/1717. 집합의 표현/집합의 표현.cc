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

ll par[1000001];
ll find(ll a) {
    if (par[a] == -1) {
        return a;
    }
    return par[a] = find(par[a]);
}

void uni(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    if (x != y) {
        par[y] = x;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i <= n; i++)
        par[i] = -1;
    for (ll i = 0; i < m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a == 0) {
            uni(b, c);
        }
        else {
            if (find(b) != find(c))
            {
                cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
    }
    return 0;
}