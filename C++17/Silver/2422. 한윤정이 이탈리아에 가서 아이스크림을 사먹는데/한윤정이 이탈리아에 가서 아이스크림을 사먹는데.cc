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
ll inf = -1000000007;

ll arr[201][201];



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        for (ll j = i + 1; j <= n; j++) {
            for (ll k = j + 1; k <= n; k++) {
                if (arr[i][j] || arr[j][k] || arr[i][k])
                    continue;
                ans++;
            }
        }
    }
    cout << ans << '\n';

    return 0;
}