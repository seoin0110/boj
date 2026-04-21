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
#include <cassert>
using ll = long long;
using namespace std;
ll inf = 1000000007;

ll a[1000001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n,m;
    cin >> n >> m;
    a[1] = 1;
    for (ll i = 2; i <= m; i++) {
        if (a[i] == 0) {
            for (ll j = 2; j * i <= m; j++) {
                a[j * i] = 1;
            }
        }
    }
    ll ans = 0;
    for (ll i = n; i <= m; i++) {
        if (a[i] == 0)
            cout << i << '\n';
    }
    //cout << ans;
    return 0;
}