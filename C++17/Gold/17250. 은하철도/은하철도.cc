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
using ll = long long;
using namespace std;
ll par[100001];

ll find(ll a) {
    if (par[a] < 0) {
        return a;
    }
    return par[a] = find(par[a]);
}

void merge(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    if (x == y)
        return;
    ll tmp = par[x];
    par[x] = y;
    par[y] += tmp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        cin >> par[i];
        par[i] *= -1;
    }
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        merge(a, b);
        cout << -par[find(a)] << '\n';
    }
    return 0;
}