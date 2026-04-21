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
ll arr[1025][1025];
//ll seg[4000000];
//ll seg2[4000000];


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            cin >> arr[i][j];
            arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }
    ll k;
    cin >> k;
    for (ll i = 0; i < k; i++) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << arr[c][d] - arr[a-1][d] - arr[c][b-1] + arr[a-1][b-1] <<'\n';
    }
    return 0;
}