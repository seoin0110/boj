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
using namespace std;
using ll = long long;

ll inf = 999999999, n, m, a[110][110];

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
    cin >> n >> m;
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= n; j++)
        {
            if (i != j)
                a[i][j] = inf;
        }
    }

    for (ll i = 0; i < m; i++)
    {
        ll aa, bb, cc;
        cin >> aa >> bb >> cc;
        if (a[aa][bb] > cc) {
            a[aa][bb] = cc;
        }
    }

    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (a[i][k] != inf && a[k][j] != inf) {
                    a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
                }
            }
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (a[i][j] == inf)
                cout << 0 << ' ';
            else
                cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
