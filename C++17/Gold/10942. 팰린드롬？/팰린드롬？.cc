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
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

ll v[2001];
ll dp[2001][2001];

ll func(ll a, ll b) {
    if (dp[a][b] != 0) {
        return dp[a][b];
    }
    else if (a == b) {
        return dp[a][b] = 1;
    }
    else if (a + 1 == b) {
        if (v[a] == v[b]) {
            return dp[a][b] = 1;
        }
        else {
            return dp[a][b] = -1;
        }
    }
    ll now = func(a + 1, b - 1);
    if (now == 1 && v[a] == v[b]) {
        return dp[a][b] = 1;
    }
    else {
        return dp[a][b] = -1;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
    }

    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        ll ans = func(a, b);
        if (ans == 1) {
            cout << 1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }


    return 0;
}