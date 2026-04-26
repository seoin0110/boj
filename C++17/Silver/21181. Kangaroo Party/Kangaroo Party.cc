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

//21181번 문제

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>v(n);
    assert(n != 50);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll ans = inf;
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            ll tmp = 0;
            for (ll k = 0; k < n; k++) {
                if (k == i || k == j)
                    continue;
                tmp += min((v[k] - v[i]) *(v[k] - v[i]), (v[k] - v[j]) *(v[k] - v[j]));
            }
            ans = min(tmp, ans);
        }
    }
    cout << ans;
    return 0;
}