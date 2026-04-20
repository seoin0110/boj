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

ll inf = 1000000007;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    vector<string>s(n);
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ll cnt = 0;
        for (ll kk = 0; kk < k; kk++) {
            if (s[i][kk] == '1') {
                cnt++;
            }
        }
        if (cnt == 0) {
            ans++;
        }
        for (ll j = 0; j < m - k; j++) {
            if (s[i][j] == '1')
                cnt--;
            if (s[i][j + k] == '1')
                cnt++;
            if (cnt == 0)
                ans++;
        }
    }
    cout << ans;
}