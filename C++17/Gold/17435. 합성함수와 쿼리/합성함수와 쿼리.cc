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

ll f[202020][20];

ll m;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> m;
    for (ll i = 1; i <= m; i++)
    {
        cin >> f[i][0];
    }
    for (ll i = 1; i < 20; i++) {
        for (ll j = 1; j <= m; j++) {
            f[j][i] = f[f[j][i - 1]][i - 1];
        }
    }
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        for (ll i = 19; i >= 0; i--) {
            if (a >= ((ll)1 << i)) {
                a -= ((ll)1 << i);
                b = f[b][i];
            }
        }
        cout << b<<'\n';
    }

    return 0;
}