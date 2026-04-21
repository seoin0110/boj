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

    ll M[501][501];
    ll tmp;
    ll d[501];
    ll P[501][501];
    ll n;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> d[i - 1] >>d[i];
    }
    for (ll g = 1; g <= n - 1; g++)
        for (ll  i = 1; i <= n - g; i++) {
            ll j = i + g;
            M[i][j] = 1e18;
            for (ll k = i; k <= j - 1; k++)
                if ((tmp = M[i][k] + M[k + 1][j] + d[i - 1] * d[k] * d[j]) < M[i][j]) {
                    M[i][j] = tmp;
                    P[i][j] = k;
                }
            //cout << g << ' ' << i << ' '<< j << '\n';
        }

    cout << M[1][n];
    return 0;
}