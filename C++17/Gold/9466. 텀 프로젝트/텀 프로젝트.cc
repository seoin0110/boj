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
ll v[100001];
ll check[100001];
ll ans;
ll cnt;
ll start;
void dfs(ll a) {
    check[a] = cnt;
    if (a == v[a]) {
        ans -= 1;
        start = cnt;
    }
    else if (start <= check[v[a]]) {
        ans -= cnt - check[v[a]] + 1;
        start = cnt;
    }
    else {
        if (check[v[a]] == 0) {
            cnt++;
            dfs(v[a]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ans = n;
        cnt = 0;
        for (ll i = 1; i <= n; i++) {
            cin >> v[i];
            check[i] = 0;
        }

        for (ll i = 1; i <= n; i++) {
            if (check[i] == 0) {
                cnt++;
                start = cnt;
                dfs(i);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}