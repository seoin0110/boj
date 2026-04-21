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
ll v[31][31];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll r, c, w;
    cin >> r >> c >> w;
    for (ll i = 0; i < 31; i++) {
        v[i][0] = 1;
        v[0][i] = 1;
    }

    for (ll i = 1; i < 31; i++) {
        for (ll j = 1; j < 31; j++) {
            v[i][j] = v[i - 1][j] + v[i][j - 1];
        }
    }
    ll ans = 0;
    for (ll i = 0; i < w; i++) {
        for (ll j = 0; j + i < w; j++) {
            ans += v[i + r - c ][j + c - 1];
        }
    }
    cout << ans;
    return 0;
}